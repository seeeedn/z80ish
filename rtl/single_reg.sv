module single_reg #(
    parameter WIDTH = 8
) (
    input logic clk_i,
    input logic rst_ni,

    input logic we_i,
    input logic [WIDTH-1:0] data_i,

    output logic [WIDTH-1:0] data_o
);

  logic [WIDTH-1:0] reg_value;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      reg_value <= '0;
    else if (we_i)
      reg_value <= data_i;
  end

  assign data_o = reg_value;

endmodule
