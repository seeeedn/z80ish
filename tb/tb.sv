
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

  task automatic execute_mov;
    repeat (5) @(posedge clk_i);
    #1;
  endtask

  initial begin
    $dumpfile("cpu.vcd");
    $dumpvars(0, tb);

    // Initialize registers
    dut.cpu_inst.regfile_inst.regs[0] = 8'h42; // B
    dut.cpu_inst.regfile_inst.regs[1] = 8'hA5; // C
    dut.cpu_inst.regfile_inst.regs[2] = 8'h12; // D
    dut.cpu_inst.regfile_inst.regs[3] = 8'h34; // E
    dut.cpu_inst.regfile_inst.regs[4] = 8'h56; // H
    dut.cpu_inst.regfile_inst.regs[5] = 8'h78; // L

    // Program:
    // MOV B,C
    // MOV C,B
    // MOV D,E
    // MOV H,L
    // MOV A,B
    // MOV L,A

    dut.mem_inst.mem_array[16'h0000] = 8'h41;
    dut.mem_inst.mem_array[16'h0001] = 8'h48;
    dut.mem_inst.mem_array[16'h0002] = 8'h53;
    dut.mem_inst.mem_array[16'h0003] = 8'h65;
    dut.mem_inst.mem_array[16'h0004] = 8'h78;
    dut.mem_inst.mem_array[16'h0005] = 8'h6F;

    // Release reset
    rst_ni = 1;

    // MOV B,C
    execute_mov();
    check_reg(0, 8'hA5, "B");

    // MOV C,B
    execute_mov();
    check_reg(1, 8'hA5, "C");

    // MOV D,E
    execute_mov();
    check_reg(2, 8'h34, "D");

    // MOV H,L
    execute_mov();
    check_reg(4, 8'h78, "H");

    // MOV A,B
    execute_mov();
    if (dut.cpu_inst.acc_value !== 8'hA5)
      $error("A FAILED: expected A5, got %h",
             dut.cpu_inst.acc_value);
    else
      $display("A PASS: A5");

    // MOV A,B
    execute_mov();
    check_reg(5, 8'hA5, "L");

    $display("MOV tests completed.");
    $finish;
  end

endmodule

