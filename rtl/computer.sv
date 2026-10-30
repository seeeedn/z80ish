module computer (
    input logic clk_i,
    input logic rst_ni
);

  logic        mem_rd;
  logic        mem_wr;
  logic [15:0] mem_addr;
  logic [7:0]  mem_data_to_mem;
  logic [7:0]  mem_data_from_mem;

  cpu cpu_inst (
    .clk_i(clk_i),
    .rst_ni(rst_ni),

    .mem_data_i(mem_data_from_mem),

    .mem_rd_o(mem_rd),
    .mem_wr_o(mem_wr),
    .mem_addr_o(mem_addr),
    .mem_data_o(mem_data_to_mem)
  );

  memory mem_inst (
    .clk_i(clk_i),
    .we_i(mem_wr),
    .re_i(mem_rd),

    .addr_i(mem_addr),
    .wr_data_i(mem_data_to_mem),
    .rd_data_o(mem_data_from_mem)
  );

endmodule
