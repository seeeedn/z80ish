// General Purpose Regs: B, C, D, E, H, L
// Special Temp Regs: W, Z
// Program Counter
// Stack Pointer

module regfile (
    input logic         clk_i,
    input logic         rst_ni,

    // Control signals
    input logic         we_i,
    input logic [2:0]   wr_sel_i,
    input logic [2:0]   rd_sel_i,
    input logic [7:0]   data_i,

    output logic [ 7:0] data_o,
    output logic [15:0] hl_o,
    output logic [15:0] wz_o
);

  // Register Map:
  // 000 - B
  // 001 - C
  // 010 - D
  // 011 - E
  // 100 - H
  // 101 - L
  // 110 - W (not addressable)
  // 111 - Z (not addressable)

  logic [7:0] regs[8];

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      for (int i = 0; i < 8; i++)
        regs[i] <= 8'b0;
    end
    else begin
      if (we_i)
        regs[wr_sel_i] <= data_i;
    end
  end

  assign data_o = regs[rd_sel_i];

  assign hl_o = {regs[4], regs[5]};
  assign wz_o = {regs[6], regs[7]};

endmodule
