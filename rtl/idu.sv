module idu (
    input logic [15:0]  value_i,
    input logic         inc_i,
    input logic         dec_i,

    output logic [15:0] value_o
);

  always_comb begin
    case ({inc_i, dec_i})
      2'b01 : value_o = value_i - 16'd1;
      2'b10 : value_o = value_i + 16'd1;
      default : value_o = value_i;
    endcase
  end

endmodule
