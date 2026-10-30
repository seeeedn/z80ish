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

      logic [2:0] rf_rd_sel;
      logic [2:0] rf_wr_sel;
      logic       rf_we;

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
      logic [9:0] target;
  } microinstr_t;

  localparam logic [9:0] FETCH    = 10'd0;
  localparam logic [9:0] FETCH_2  = 10'd1;
  localparam logic [9:0] DECODE   = 10'd2;

  localparam logic [9:0] LOAD_RR  = 10'd8;
  localparam logic [9:0] LOAD_RM  = 10'd12;
  localparam logic [9:0] LOAD_MR  = 10'd16;

  localparam logic [9:0] HALT     = 10'd1023;

endpackage
