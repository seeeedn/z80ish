

module tb;

  logic clk_i = 0;
  logic rst_ni = 0;

  computer dut (
    .clk_i(clk_i),
    .rst_ni(rst_ni)
  );

  always #5 clk_i = ~clk_i;

  task automatic check_reg(
    input int reg_idx,
    input logic [7:0] expected,
    input string reg_name
  );
    if (dut.cpu_inst.regfile_inst.regs[reg_idx] !== expected)
      $error("%s FAILED: expected %h, got %h",
             reg_name, expected,
             dut.cpu_inst.regfile_inst.regs[reg_idx]);
    else
      $display("%s PASS: %h", reg_name, expected);
  endtask

  // One extra cycle for WB/FETCH overlay
  task automatic execute_mov;
    repeat (5) @(posedge clk_i);
    #1;
  endtask

  task automatic execute_mem_mov;
    repeat (7) @(posedge clk_i);
    #1;
  endtask

  initial begin
    $dumpfile("cpu.vcd");
    $dumpvars(0, tb);

    // ------------------------------------------------
    // Initialize registers
    // ------------------------------------------------

    dut.cpu_inst.regfile_inst.regs[0] = 8'h42; // B
    dut.cpu_inst.regfile_inst.regs[1] = 8'hA5; // C
    dut.cpu_inst.regfile_inst.regs[2] = 8'h12; // D
    dut.cpu_inst.regfile_inst.regs[3] = 8'h34; // E
    dut.cpu_inst.regfile_inst.regs[4] = 8'h56; // H
    dut.cpu_inst.regfile_inst.regs[5] = 8'h78; // L

    // ------------------------------------------------
    // Program
    // ------------------------------------------------

    // Register-to-register MOV tests
    dut.mem_inst.mem_array[16'h0000] = 8'h41; // MOV B,C
    dut.mem_inst.mem_array[16'h0001] = 8'h48; // MOV C,B
    dut.mem_inst.mem_array[16'h0002] = 8'h53; // MOV D,E
    dut.mem_inst.mem_array[16'h0003] = 8'h65; // MOV H,L
    dut.mem_inst.mem_array[16'h0004] = 8'h78; // MOV A,B
    dut.mem_inst.mem_array[16'h0005] = 8'h6F; // MOV L,A

    // Memory MOV tests
    dut.mem_inst.mem_array[16'h0006] = 8'h70; // MOV M,B
    dut.mem_inst.mem_array[16'h0007] = 8'h71; // MOV M,C
    dut.mem_inst.mem_array[16'h0008] = 8'h46; // MOV B,M
    dut.mem_inst.mem_array[16'h0009] = 8'h7E; // MOV A,M

    // Stop executing after the tests (placeholder)
    dut.mem_inst.mem_array[16'h000A] = 8'h76; // HLT

    // ------------------------------------------------
    // Release reset
    // ------------------------------------------------

    rst_ni = 1;

    // ------------------------------------------------
    // Register-to-register tests
    // ------------------------------------------------

    execute_mov();
    check_reg(0, 8'hA5, "MOV B,C");

    execute_mov();
    check_reg(1, 8'hA5, "MOV C,B");

    execute_mov();
    check_reg(2, 8'h34, "MOV D,E");

    execute_mov();
    check_reg(4, 8'h78, "MOV H,L");

    execute_mov();

    if (dut.cpu_inst.acc_value !== 8'hA5)
      $error("MOV A,B FAILED: expected A5, got %h",
             dut.cpu_inst.acc_value);
    else
      $display("MOV A,B PASS: A = A5");

    execute_mov();
    check_reg(5, 8'hA5, "MOV L,A");

    // ------------------------------------------------
    // MOV M,B
    // ------------------------------------------------

    // HL = 78A5H after MOV L,A
    // B = A5H
    execute_mov();

    if (dut.mem_inst.mem_array[16'h78A5] !== 8'hA5)
      $error("MOV M,B FAILED: expected A5, got %h",
             dut.mem_inst.mem_array[16'h78A5]);
    else
      $display("MOV M,B PASS: Memory[78A5H] = A5");

    // ------------------------------------------------
    // MOV M,C
    // ------------------------------------------------

    // C = A5H
    execute_mov();

    if (dut.mem_inst.mem_array[16'h78A5] !== 8'hA5)
      $error("MOV M,C FAILED: expected A5, got %h",
             dut.mem_inst.mem_array[16'h78A5]);
    else
      $display("MOV M,C PASS: Memory[78A5H] = A5");

    // ------------------------------------------------
    // MOV B,M
    // ------------------------------------------------

    execute_mem_mov();
    check_reg(0, 8'hA5, "MOV B,M");

    // ------------------------------------------------
    // MOV A,M
    // ------------------------------------------------

    execute_mem_mov();

    if (dut.cpu_inst.acc_value !== 8'hA5)
      $error("MOV A,M FAILED: expected A5, got %h",
             dut.cpu_inst.acc_value);
    else
      $display("MOV A,M PASS: A = A5");

    // ------------------------------------------------
    // Finish
    // ------------------------------------------------

    $display("--------------------------------");
    $display("MOV tests completed.");
    $display("--------------------------------");

    $finish;
  end

endmodule

