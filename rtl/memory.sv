module memory #(
    parameter ADDR_LEN = 16
) (
    input logic                 clk_i,
    input logic                 we_i,
    input logic                 re_i,

    input logic [ADDR_LEN-1:0]  addr_i,
    input logic [7:0]           wr_data_i,

    output logic [7:0]          rd_data_o
);

  logic [7:0] mem_array[2**ADDR_LEN];
  logic [7:0] rd_data;

  always_ff @(posedge clk_i) begin
    if (we_i)
      mem_array[addr_i] <= wr_data_i;

    if (re_i)
      rd_data <= mem_array[addr_i];
  end

  assign rd_data_o = rd_data;

endmodule
