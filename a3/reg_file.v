// regfile 

module reg_file (
    // input [31:0] idata ,
    input reset ,
    input clk ,                 // to write at the next clock edge
    input [3:0] rf_we ,
    input [31:0] rf_wdata ,
    input [5:0] itype_flag ,
    input [4:0] rs1 ,
    input [4:0] rs2 ,
    input [4:0] rd ,
    input [31:0] imm12_ext ,
    input [31:0] imm20_ext ,
    input l_unsign_flag ,

    output reg [31:0] x0 ,
    output reg [31:0] x1 ,
    output reg [31:0] x2 ,
    output reg [31:0] x3 ,
    output reg [31:0] x4 ,
    output reg [31:0] x5 ,
    output reg [31:0] x6 ,
    output reg [31:0] x7 ,
    output reg [31:0] x8 ,
    output reg [31:0] x9 ,
    output reg [31:0] x10 ,
    output reg [31:0] x11 ,
    output reg [31:0] x12 ,
    output reg [31:0] x13 ,
    output reg [31:0] x14 ,
    output reg [31:0] x15 ,
    output reg [31:0] x16 ,
    output reg [31:0] x17 ,
    output reg [31:0] x18 ,
    output reg [31:0] x19 ,
    output reg [31:0] x20 ,
    output reg [31:0] x21 ,
    output reg [31:0] x22 ,
    output reg [31:0] x23 ,
    output reg [31:0] x24 ,
    output reg [31:0] x25 ,
    output reg [31:0] x26 ,
    output reg [31:0] x27 ,
    output reg [31:0] x28 ,
    output reg [31:0] x29 ,
    output reg [31:0] x30 ,
    output reg [31:0] x31 ,

    output reg [31:0] rf_op1 ,
    output reg [31:0] rf_op2 ,
    output reg [31:0] rf_op3

);
    //! control logic provides all inputs and flags

    // declare registers
    reg [31:0] x[31:0] ;
    integer i;

    // Writing to regs in the next cycle : value that the previous instruction gives to rf_wdata
    always @(posedge clk) begin
        
        if ( rf_we == 4'b0001 && rd != 5'd0 && !l_unsign_flag) begin  // lb
            x[rd] <= {{24{rf_wdata[7]}},rf_wdata[7:0]} ; //! must check
        end

        else if ( rf_we == 4'b0011 && rd != 5'd0 && !l_unsign_flag) begin  // lh
            x[rd] <= {{16{rf_wdata[15]}},rf_wdata[15:0]} ; //! must check
        end

        else if ( rf_we == 4'b1111 && rd != 5'd0 ) begin  // lw and other instructions that write by word
            x[rd] <= rf_wdata ; 
        end 

        else if ( rf_we == 4'b0001 && rd != 5'd0 && l_unsign_flag) begin  // lbu
            x[rd] <= {{24{1'b0}} , rf_wdata[7:0] }; 
        end 

        else if ( rf_we == 4'b0011 && rd != 5'd0 && l_unsign_flag) begin  // lhu
            x[rd] <= {{16{1'b0}} , (rf_wdata[15:0])}; 
        end 
        
    end

    // combinational logic
    always @(*) begin
        
        // output the 32 regs to read in gtkwave
        x0 = x[0] ;
        x1 = x[1] ;
        x2 = x[2] ;
        x3 = x[3] ;
        x4 = x[4] ;
        x5 = x[5] ;
        x6 = x[6] ;
        x7 = x[7] ;
        x8 = x[8] ;
        x9 = x[9] ;
        x10 = x[10] ;
        x11 = x[11] ;
        x12 = x[12] ;
        x13 = x[13] ;
        x14 = x[14] ;
        x15 = x[15] ;
        x16 = x[16] ;
        x17 = x[17] ;
        x18 = x[18] ;
        x19 = x[19] ;
        x20 = x[20] ;
        x21 = x[21] ;
        x22 = x[22] ;
        x23 = x[23] ;
        x24 = x[24] ;
        x25 = x[25] ;
        x26 = x[26] ;
        x27 = x[27] ;
        x28 = x[28] ;
        x29 = x[29] ;
        x30 = x[30] ;
        x31 = x[31] ;


        if (reset) begin
            
            for ( i=0 ; i<32 ; i=i+1 ) begin 
                x[i] = 0;
            end
        end

        else begin
            
            rf_op1 = x[rs1] ;  // rf_op1 is always x[rs1] and rs1 is always at the same bit of idata
            rf_op2 = x[rs2] ;
            rf_op3 = (imm12_ext) ; 
            
        end

    end

endmodule