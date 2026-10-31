module control
    import microcode_pkg::*;
(
    input  logic       clk_i,
    input  logic       rst_ni,

    // Instruction
    input  logic [7:0] opcode_i,

    // Instruction register
    output logic       load_ir_o,

    // ALU
    output logic [4:0] alu_op_o,
    output logic       load_a_reg_o,

    // Register file
    output logic [2:0] rf_rd_sel_o,
    output logic [2:0] rf_wr_sel_o,
    output logic       rf_we_o,
    output logic       load_pc_o,
    output logic       load_sp_o,

    // IDU (Increment-Decrement Unit)
    output logic       addr_inc_o,
    output logic       addr_dec_o,
    output logic       pc_inc_o,

    // Memory
    output logic       mem_rd_o,
    output logic       mem_wr_o,

    // Address Bus Select:
    // 00 -> PC
    // 01 -> SP
    // 10 -> HL
    // 11 -> WZ
    output logic [1:0] addr_bus_sel_o,

    // Data Bus Select:
    // 00 -> Regfile
    // 01 -> ALU
    // 10 -> Memory
    // 11 -> Unused (maybe peripherals, etc.)
    output logic [1:0] data_bus_sel_o
);

  logic [9:0] micro_pc, micro_pc_n;
  logic [9:0] dispatch_addr;

  microinstr_t u_instr;

  dispatcher instr_dispatch (
    .opcode_i(opcode_i),
    .entry_addr_o(dispatch_addr)
  );

  microsequencer u_sequencer (
    .upc_i(micro_pc),
    .seq_i(u_instr.seq),
    .dispatch_addr_i(dispatch_addr),
    .target_addr_i(u_instr.target),
    .next_upc_o(micro_pc_n)
  );

  microcode_rom u_rom (
    .micro_pc_i(micro_pc),
    .uinstr_o(u_instr)
  );

  logic [2:0] dst_reg, src_reg;
  assign dst_reg = opcode_i[5:3];
  assign src_reg = opcode_i[2:0];

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      micro_pc <= 10'd0;
    else
      micro_pc <= micro_pc_n;
  end

  always_comb begin
    load_ir_o       = u_instr.load_ir;

    alu_op_o        = u_instr.alu_op;
    load_a_reg_o    = 1'b0;

    rf_rd_sel_o     = src_reg;
    rf_wr_sel_o     = dst_reg;
    rf_we_o         = u_instr.rf_we;
    load_pc_o       = u_instr.load_pc;
    load_sp_o       = u_instr.load_sp;

    addr_inc_o      = u_instr.addr_inc;
    addr_dec_o      = u_instr.addr_dec;
    pc_inc_o        = u_instr.pc_inc;

    mem_rd_o        = u_instr.mem_rd;
    mem_wr_o        = u_instr.mem_wr;

    addr_bus_sel_o  = u_instr.addr_bus_sel;
    data_bus_sel_o  = u_instr.data_bus_sel;

    // Microinstruction decoding goes here
    if (micro_pc == LOAD_RR) begin
        if (dst_reg == 3'b111) begin
          load_a_reg_o = 1'b1;
          rf_we_o      = 1'b0;
        end
        if (src_reg == 3'b111) begin
          alu_op_o       = 5'b11001; // Pass A through ALU
          data_bus_sel_o = 2'b01;
        end
    end

    if (micro_pc == (LOAD_RM + 1)) begin
        if (dst_reg == 3'b111) begin
          load_a_reg_o = 1'b1;
          rf_we_o      = 1'b0;
        end
    end

    if (micro_pc == LOAD_MR) begin
        if (src_reg == 3'b111) begin
          alu_op_o       = 5'b11001; // Pass A through ALU
          data_bus_sel_o = 2'b01;
        end
    end

  end

endmodule
