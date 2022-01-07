// regfile 

module reg_file (
    // input [31:0] idata ,
    input reset ,
    input clkreset_flag ,
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

        else if ( rf_we == 4'b1111 && rd != 5'd0 && !l_unsign_flag) begin  // lw or auipc or jal
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


        if (reset & clkreset_flag) begin
            
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

// always @(x[0]) begin
//         $display("x0 changed to %d ",x[0]);
// end
// always @(x[1]) begin
//         $display("x1 changed to %d ",x[1]);
// end
// always @(x[2]) begin
//         $display("x2 changed to %d ",x[2]);
// end
// always @(x[3]) begin
//         $display("x3 changed to %d ",x[3]);
// end
// always @(x[4]) begin
//         $display("x4 changed to %d ",x[4]);
// end
// always @(x[5]) begin
//         $display("x5 changed to %d ",x[5]);
// end
// always @(x[6]) begin
//         $display("x6 changed to %d ",x[6]);
// end
// always @(x[7]) begin
//         $display("x7 changed to %d ",x[7]);
// end
// always @(x[8]) begin
//         $display("x8 changed to %d ",x[8]);
// end
// always @(x[9]) begin
//         $display("x9 changed to %d ",x[9]);
// end
// always @(x[10]) begin
//         $display("x10 changed to %d ",x[10]);
// end
// always @(x[11]) begin
//         $display("x11 changed to %d ",x[11]);
// end
// always @(x[12]) begin
//         $display("x12 changed to %d ",x[12]);
// end
// always @(x[13]) begin
//         $display("x13 changed to %d ",x[13]);
// end
// always @(x[14]) begin
//         $display("x14 changed to %d ",x[14]);
// end
// always @(x[15]) begin
//         $display("x15 changed to %d ",x[15]);
// end
// always @(x[16]) begin
//         $display("x16 changed to %d ",x[16]);
// end
// always @(x[17]) begin
//         $display("x17 changed to %d ",x[17]);
// end
// always @(x[18]) begin
//         $display("x18 changed to %d ",x[18]);
// end
// always @(x[19]) begin
//         $display("x19 changed to %d ",x[19]);
// end
// always @(x[20]) begin
//         $display("x20 changed to %d ",x[20]);
// end
// always @(x[21]) begin
//         $display("x21 changed to %d ",x[21]);
// end
// always @(x[22]) begin
//         $display("x22 changed to %d ",x[22]);
// end
// always @(x[23]) begin
//         $display("x23 changed to %d ",x[23]);
// end
// always @(x[24]) begin
//         $display("x24 changed to %d ",x[24]);
// end
// always @(x[25]) begin
//         $display("x25 changed to %d ",x[25]);
// end
// always @(x[26]) begin
//         $display("x26 changed to %d ",x[26]);
// end
// always @(x[27]) begin
//         $display("x27 changed to %d ",x[27]);
// end
// always @(x[28]) begin
//         $display("x28 changed to %d ",x[28]);
// end
// always @(x[29]) begin
//         $display("x29 changed to %d ",x[29]);
// end
// always @(x[30]) begin
//         $display("x30 changed to %d ",x[30]);
// end
// always @(x[31]) begin
//         $display("x31 changed to %d ",x[31]);
// end

endmodule