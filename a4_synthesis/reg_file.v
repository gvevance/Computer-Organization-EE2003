// regfile 

module reg_file (
    input reset ,
    input clkreset_flag ,
    input clk ,                 // to write at the next clock edge
    input [3:0] rf_we ,
    input [31:0] rf_wdata ,
    input [4:0] rs1 ,
    input [4:0] rs2 ,
    input [4:0] rd ,
    input [31:0] imm12_ext ,
    input l_unsign_flag ,

    output reg [31:0] rf_op1 ,
    output reg [31:0] rf_op2 ,
    output reg [31:0] rf_op3

);
    //! control logic provides all inputs and flags

    // declare registers
    reg [31:0] x[31:0] ;
    integer i = 0;

    // Writing to regs in the next cycle : value that the previous instruction gives to rf_wdata
    always @(posedge clk) begin
        
        if (clkreset_flag) begin
            
            for ( i=0 ; i<32 ; i=i+1 ) begin 
                x[i] <= 32'd0;
            end

        end 

        else begin 
            
            x[0] <= 0 ;

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

            else x[rd] <= x[rd] ;  // TODO : must check if this will flag an error or if it is even required
        end

    end

    // combinational logic
    always @(*) begin
        
        rf_op1 = x[rs1] ;  // rf_op1 is always x[rs1] and rs1 is always at the same bit of idata
        rf_op2 = x[rs2] ;
        rf_op3 = (imm12_ext) ; 

    end

endmodule