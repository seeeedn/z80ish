module alu (
    input logic [7:0] op_a_i,
    input logic [7:0] op_b_i,
    input logic [4:0] alu_op_i,
    input logic [3:0] flags_i,

    output logic [3:0] flags_o,
    output logic [7:0] res_o
);

  localparam OP_ADD = 5'b00000;
  localparam OP_ADC = 5'b00001;
  localparam OP_SUB = 5'b00010;
  localparam OP_SBC = 5'b00011;
  localparam OP_AND = 5'b00100;
  localparam OP_XOR = 5'b00101;
  localparam OP_OR  = 5'b00110;
  localparam OP_CP  = 5'b00111;
  /*
  localparam OP_RLC = 5'b01000;
  localparam OP_RRC = 5'b01001;
  localparam OP_RL  = 5'b01010;
  localparam OP_RR  = 5'b01011;
  localparam OP_SLA = 5'b01100;
  localparam OP_SRA = 5'b01101;
  localparam OP_SWAP= 5'b01110;
  localparam OP_SRL = 5'b01111;
  */
  localparam OP_LF  = 5'b10000; // Load Flags
  //           unused 5'b10001
  localparam OP_SF  = 5'b10010; // Save Flags
  //           unused 5'b10011
  /*
  localparam OP_DAA = 5'b10100;
  localparam OP_CPL = 5'b10101;
  localparam OP_SCF = 5'b10110;
  localparam OP_CCF = 5'b10111;
  //           unused 5'b11000
  */
  localparam PASS_A = 5'b11001;
  localparam PASS_B = 5'b11010;
  /*
  //           unused 5'b11011
  //           unused 5'b11100
  localparam OP_BIT = 5'b11101;
  localparam OP_RES = 5'b11110;
  localparam OP_SET = 5'b11111;
  */

  localparam F_Z = 2'd3;
  localparam F_N = 2'd2;
  localparam F_H = 2'd1;
  localparam F_C = 2'd0;

  logic test_zero;
  logic carry;

  logic [4:0] res_hi;
  logic [4:0] res_lo;
  logic [7:0] adjust;

  always_comb begin
    test_zero = 1'b1;
    res_hi = 5'b0;
    res_lo = 5'b0;
    adjust = 8'b0;

    if (alu_op_i == OP_ADC ||
        alu_op_i == OP_SBC
       )
      carry = flags_i[F_C];
    else
      carry = 1'b0;

    flags_o = 4'b0;

    case (alu_op_i)
      OP_ADD, OP_ADC : begin
        res_lo = {1'b0, op_a_i[3:0]} + {1'b0, op_b_i[3:0]} + {4'b0, carry};
        flags_o[F_H] = res_lo[4];
        res_hi = {1'b0, op_a_i[7:4]} + {1'b0, op_b_i[7:4]} + {4'b0, res_lo[4]};
        flags_o[F_C] = res_hi[4];
        res_o = {res_hi[3:0], res_lo[3:0]};
      end

      OP_SUB, OP_SBC, OP_CP : begin
        flags_o[F_N] = 1'b1;
        res_lo = {1'b0, op_a_i[3:0]} + ~({1'b0, op_b_i[3:0]} + {4'b0, carry}) + 5'b00001;
        flags_o[F_H] = res_lo[4];
        res_hi = {1'b0, op_a_i[7:4]} + ~({1'b0, op_b_i[7:4]}) + {4'b0, ~res_lo[4]};
        flags_o[F_C] = res_hi[4];
        res_o = (alu_op_i == OP_CP) ? op_a_i : {res_hi[3:0], res_lo[3:0]};
      end

      OP_AND : begin
        res_o = op_a_i & op_b_i;
        flags_o[F_H] = 1'b1;
      end

      OP_XOR : begin
        res_o = op_a_i ^ op_b_i;
      end

      OP_OR : begin
        res_o = op_a_i | op_b_i;
      end

      OP_SF : begin
        test_zero = 1'b0;
        flags_o = op_b_i[7:4];
        res_o = op_a_i;
      end
/*
      OP_CPL : begin
        test_zero = 1'b0;
        res_o = ~op_a_i;
        flags_o[F_Z] = flags_i[F_Z];
        flags_o[F_N] = 1'b1;
        flags_o[F_H] = 1'b1;
        flags_o[F_C] = flags_i[F_C];
      end

      OP_SCF : begin
        test_zero = 1'b0;
        res_o = op_a_i;
        flags_o[F_Z] = flags_i[F_Z];
        flags_o[F_C] = 1'b1;
      end

      OP_CCF : begin
        test_zero = 1'b0;
        res_o = op_a_i;
        flags_o[F_Z] = flags_i[F_Z];
        flags_o[F_C] = ~flags_i[F_C];
      end
*/
      PASS_A: begin
        res_o = op_a_i;
        flags_o = flags_i;
      end

      PASS_B: begin
        res_o = op_b_i;
        flags_o = flags_i;
      end

      default: begin
        res_o = op_b_i;
        flags_o = flags_i;
      end
    endcase

    if (test_zero)
      flags_o[F_Z] = (res_o == 8'b0) ? 1'b1 : 1'b0;
  end

endmodule
