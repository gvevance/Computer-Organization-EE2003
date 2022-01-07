// module that calculates address to branch to
//! this block is used in AUIPC instruction to calculate value to be written to x[rd] too 
//! n_addr_branch calculates iaddr + imm too

module branch_controller_ALU (
    input is_branch_type ,
    input jal ,
    input auipc ,
    input is_conditional_branch_type ,
    input [31:0] input_iaddr ,
    input [31:0] alu_out ,
    input [31:0] branch_condition ,  // the value alu_out is to be checked against for equality
    input [31:0] input_imm12_ext ,
    output reg [31:0] next_addr_branch ,
    output reg take_branch
);
    always @(*) begin
        if ( is_branch_type ) begin
            if ( is_conditional_branch_type == 0 ) begin  // JALR
                next_addr_branch = alu_out ;
                take_branch = 1 ; 
            end

            else if ( is_conditional_branch_type == 1 && alu_out == branch_condition ) begin  
                next_addr_branch = input_iaddr + (input_imm12_ext<<1) ;  // ALU op => branch_controller is an ALU block
                take_branch = 1 ;  
            end

            else begin
                next_addr_branch = 0 ;
                take_branch = 0 ;  
            end
        end

        else if (auipc == 1'b1) begin
            next_addr_branch = input_iaddr + input_imm12_ext ;
            take_branch = 0 ;
        end

        else if (jal == 1'b1) begin
            next_addr_branch = input_iaddr + (input_imm12_ext<<1) ;
            take_branch = 1 ;  
        end

        else begin
            next_addr_branch = 0 ;  
            take_branch = 0 ;
        end 

    end  

endmodule