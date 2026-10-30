module microsequencer 
    import microcode_pkg::*;
(
    input logic [9:0] upc_i,
    input seq_t       seq_i,
    input logic [9:0] dispatch_addr_i,
    input logic [9:0] target_addr_i,

    output logic [9:0] next_upc_o
);

  always_comb begin
    next_upc_o = upc_i;

    case (seq_i)

      SEQ_NEXT:
        next_upc_o = upc_i + 10'd1;

      SEQ_DISPATCH:
        next_upc_o = dispatch_addr_i;

      SEQ_JUMP:
        next_upc_o = target_addr_i;

      SEQ_HALT:
        next_upc_o = HALT;

      default:
        next_upc_o = HALT;

    endcase
  end
endmodule
