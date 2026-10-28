module cpu (
    input               clk_i,
    input               rst_ni,

    input logic  [ 7:0] mem_data_i,

    output logic        mem_rd_o,
    output logic        mem_wr_o,
    output logic [15:0] mem_addr_o,
    output logic [ 7:0] mem_data_o
);

  logic [ 7:0] data_bus;
  logic [15:0] addr_bus;

  logic [7:0] ir_value;
  single_reg #(
    .WIDTH(8)
  ) ir_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(data_bus),
    .data_o(ir_value)
  );

  logic [7:0] acc_value;
  single_reg #(
    .WIDTH(8)
  ) acc_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(data_bus),
    .data_o(acc_value)
  );

  logic [3:0] flags_value;
  logic [7:0] flags_reg_full;
  single_reg #(
    .WIDTH(4)
  ) flag_reg_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(alu_flags),
    .data_o(flags_value)
  );
  assign flags_reg_full = {flag_value, 4'b0000};

  logic [15:0] pc_value;
  single_reg #(
    .WIDTH(16)
  ) pc_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(),
    .data_o(pc_value)
  );

  logic [15:0] sp_value;
  single_reg #(
    .WIDTH(16)
  ) sp_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(),
    .data_o(sp_value)
  );

  logic [ 7:0] rf_rd_value;
  logic [15:0] rf_hl_value;
  logic [15:0] rf_wz_value;
  regfile regfile_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .wr_sel_i(),
    .rd_sel_i(),
    .data_i(data_bus),
    .data_o(rf_rd_value),
    .hl_o(rf_hl_value),
    .wz_o(rf_wz_value)
  );

  // Data Bus Select:
  // 00 -> Regfile
  // 01 -> ALU
  // 10 -> Memory
  // 11 -> Unused (maybe peripherals, etc.)
  logic [1:0] dbus_sel;
  assign data_bus = (dbus_sel == 2'b00) ? rf_rd_value :
                    (dbus_sel == 2'b01) ? alu_res :
                    (dbus_sel == 2'b10) ? mem_data_i :
                    (dbus_sel == 2'b11) ? 8'd0 :
                    8'd0;

  // Address Bus Select:
  // 00 -> PC
  // 01 -> SP
  // 10 -> HL
  // 11 -> WZ
  logic [1:0] abus_sel;
  assign addr_bus = (abus_sel == 2'b00) ? pc_value :
                    (abus_sel == 2'b01) ? sp_value :
                    (abus_sel == 2'b10) ? rf_hl_value :
                    (abus_sel == 2'b11) ? rf_wz_value :
                    16'd0;

  logic [7:0] alu_op_b;
  single_reg #(
    .WIDTH(8)
  ) alu_temp_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .we_i(),
    .data_i(data_bus),
    .data_o(alu_op_b)
  );

  logic [3:0] alu_flags;
  logic [7:0] alu_res;
  alu alu_inst (
    .op_a_i(acc_value),
    .op_b_i(alu_op_b),
    .alu_op_i(),
    .flags_i(flags_value),
    .flags_o(alu_flags),
    .res_o(alu_res)
  );

  logic [15:0] pc_idu_value;
  idu idu_pc_inst (
    .value_i(pc_value),
    .inc_i(),
    .dec_i(1'b0),
    .value_o(pc_idu_value)
  );

  logic [15:0] sp_idu_value;
  idu idu_sp_inst (
    .value_i(sp_value),
    .inc_i(),
    .dec_i(),
    .value_o(sp_idu_value)
  );

endmodule
