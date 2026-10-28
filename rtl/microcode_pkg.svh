package microcode_pkg;

  typedef enum logic [2:0] {
    SEQ_NEXT,
    SEQ_DISPATCH,
    SEQ_JUMP,
    SEQ_HALT
  } seq_t;

  typedef struct packed {
      logic       load_ir;
      logic [4:0] alu_op;
      logic       load_a_reg;

      logic [2:0] reg_rd_sel;
      logic [2:0] reg_wr_sel;
      logic       reg_we;

      logic       load_pc;
      logic       load_sp;

      logic       addr_inc;
      logic       addr_dec;
      logic       pc_inc;

      logic       mem_rd;
      logic       mem_wr;

      logic [1:0] addr_bus_sel;
      logic [1:0] data_bus_sel;

      seq_t       seq;
  } microinstr_t;

  localparam logic [9:0] FETCH    = 10'd0;
  localparam logic [9:0] DECODE   = 10'd2;
  localparam logic [9:0] LOAD_REG = 10'd16;
  localparam logic [9:0] MEM_RD   = 10'd32;
  localparam logic [9:0] MEM_WR   = 10'd48;
  localparam logic [9:0] HALT     = 10'd1023;

endpackage
