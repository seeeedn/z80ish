import microcode_pkg::*;
module dispatcher (
    input logic [7:0] opcode_i,

    output logic [9:0] entry_addr_o
);

  always_comb begin
    entry_addr_o = 10'd0;

    case (opcode_i[7:6])

      2'b00: begin
        entry_addr_o = HALT;  // unused so far
      end

      2'b01: begin
        if (opcode_i[5:3] == 3'b110 &&
            opcode_i[2:0] == 3'b110)
          entry_addr_o = HALT;  // The real HALT-Instruction
        else if (opcode_i[5:3] == 3'b110)
          entry_addr_o = MEM_WR;
        else if (opcode_i[2:0] == 3'b110)
          entry_addr_o = MEM_RD;
        else
          entry_addr_o = REG_LOAD;
      end

      2'b10: begin
        entry_addr_o = HALT;  // future reg-reg arith
      end

      2'b11: begin
        entry_addr_o = HALT;  // future controlflow
      end

      default: begin
        entry_addr_o = HALT;
      end

    endcase
  end

endmodule
