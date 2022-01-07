/*  input is idata from IMEM
    outputs are various control signals
*/

module control (
    input reset ,
    input [31:0] idata ,
    input [31:0] iaddr ,  // not needed (?)
    input clkreset_flag ,
    
    //! control signals
    output reg [3:0] alu_op,
    output reg mux1_sel ,
    output reg [1:0] mux2_sel ,
    output reg auipc ,
    output reg jal ,
    output reg [3:0] dwe ,
    output reg [3:0] rf_we , // reg file write enable
    output reg l_unsign_flag ,
    output reg is_branch_type ,
    output reg is_conditional_branch_type ,
    output reg [31:0] branch_condition ,
    
    //! address or imm types (+shamt)
    output reg [4:0] rs1 , 
    output reg [4:0] rs2 ,
    output reg [4:0] rd ,
    output reg [31:0] imm12_ext 
);
    wire [6:0] opcode;
    assign opcode = idata[6:0]; 

    always @(*) begin
	
    if (reset && clkreset_flag) begin
        
        // reset addresses and immediate (tyoes)
        rs1 = 0 ;
        rs2 = 0 ;
        rd = 0 ;
        imm12_ext = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        alu_op = 4'b1111 ;  // unused state
        l_unsign_flag = 0 ;
        dwe = 0 ;  // not enabled
        rf_we = 0 ;  // not enabled
        mux1_sel = 0 ; // no choice
        mux2_sel = 0 ; // no choice
        jal = 0 ;

    end

    else if ( clkreset_flag==1'b0 && opcode == 7'b0110011 )   //! R type instruction format with rs2 - to be executed only if rd != 0
    begin
            
        rs1 = idata[19:15] ;
        rs2 = idata[24:20] ;
        rd = idata[11:7] ;
        imm12_ext = 0 ;
        mux1_sel = 0 ;
        mux2_sel = 0 ;
        dwe = 4'b0000 ;
        rf_we = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        jal = 0 ;
        l_unsign_flag = 0;
        alu_op = 0 ;

        if (idata[14:12] == 3'b000 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin
            alu_op = 0 ; // 0 for add  
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b000 && idata[31:25] == 7'b0100000 && idata[11:7] != 5'd0) begin
            alu_op = 1 ; // 1 for sub
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b001 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin
            alu_op = 2 ; // 2 for sll
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b010 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin
            alu_op = 3 ; // 3 for slt
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b011 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin
            alu_op = 4 ; // 4 for sltu
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b100 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin 
            alu_op = 5 ; // 5 for xor
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b101 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) begin 
            alu_op = 6 ; // 6 for srl
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b101 && idata[31:25] == 7'b0100000 && idata[11:7] != 5'd0) begin
            alu_op = 7 ; // 7 for sra
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b110 && idata[31:25] == 7'b0000000) begin 
            alu_op = 8 ; // 8 for or
            rf_we = 4'b1111 ;
        end

        else if (idata[14:12] == 3'b111 && idata[31:25] == 7'b0000000) begin
            alu_op = 9 ; // 9 for and
            rf_we = 4'b1111 ;
        end   

        else begin
            alu_op = 0 ;
            rf_we = 0 ;
        end
        
    end

    //! CHECK FOR SIGN EXTENSION 

    else if ( clkreset_flag==1'b0 && opcode == 7'b0010011  )  //! I-type instructions - including 12 bit imm and immediate shift type
    begin
            
        rs1 = idata[19:15] ;
        rd = idata[11:7] ;
        rs2 = idata[24:20] ;  // this is for slli , srli , srai
        alu_op = 0 ;
        rf_we = 0 ;
        mux1_sel = 1 ;
        mux2_sel = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        dwe = 0 ;
        jal = 0 ;
        l_unsign_flag = 0 ;

        if ( idata[14:12] == 3'b000 && idata[11:7] != 5'd0) 
        begin
            alu_op = 0 ; //! addi   
            imm12_ext = {{20{idata[31]}} , idata[31:20]} ;    
            rf_we = 4'b1111 ; 
        end 

        else if ( idata[14:12] == 3'b010 && idata[11:7] != 5'd0) 
        begin
            alu_op = 3 ; //! slti   
            imm12_ext = {{20{idata[31]}} , idata[31:20]} ; 
            rf_we = 4'b1111 ;
        end 

        else if ( idata[14:12] == 3'b011 && idata[11:7] != 5'd0) 
        begin
            alu_op = 4 ; //! sltiu      
            imm12_ext = {{20{1'b0}} , idata[31:20]} ; 
            rf_we = 4'b1111 ;
        end 

        else if ( idata[14:12] == 3'b100 && idata[11:7] != 5'd0) 
        begin
            alu_op = 5 ; //! xori  
            imm12_ext = {{20{1'b0}} , idata[31:20]} ;  
            rf_we = 4'b1111 ; 
        end 

        else if ( idata[14:12] == 3'b110 && idata[11:7] != 5'd0) 
        begin
            alu_op = 8 ; //! ori
            imm12_ext = {{20{1'b0}} , idata[31:20]} ; 
            rf_we = 4'b1111 ;
        end

        
        else if ( idata[14:12] == 3'b111 && idata[11:7] != 5'd0) 
        begin
            alu_op = 9 ; //! andi   
            imm12_ext = {{20{1'b0}} , idata[31:20]} ;    
            rf_we = 4'b1111 ;  
        end
        
        else if ( idata[14:12] == 3'b001 && idata[11:7] != 5'd0) 
        begin
            alu_op = 2 ; //! 2 for slli
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
            imm12_ext = 0 ;
        end

        else if ( idata[14:12] == 3'b101 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) 
        begin
            alu_op = 6 ; //! 6 for srli
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
            imm12_ext = 0 ;
        end
            
        else if ( idata[14:12] == 3'b101 && idata[31:25] == 7'b0100000 && idata[11:7] != 5'd0) 
        begin
            alu_op = 7 ; //! 7 for srai 
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
            imm12_ext = 0 ;
        end 

        else begin
            alu_op = 0 ;
            mux1_sel = 0 ;
            rf_we = 4'b0000 ;
            imm12_ext = 0 ;
        end
        
    end

    else if ( clkreset_flag==1'b0 && opcode == 7'b0100011 )  //! S-type instructions 
    begin
            
        rs1 = idata[19:15] ;
        rs2 = idata[24:20] ;
        rd = 0 ;
        imm12_ext = {{20{idata[31]}} , {idata[31:25]} , {idata[11:7]}} ;
        mux1_sel = 1 ;
        mux2_sel = 0 ;  // does not matter ; actually don't care
        rf_we = 0 ;
        alu_op = 0;  // 0 for signed addition
        l_unsign_flag = 0 ;
        dwe = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        jal = 0 ;
        
        if ( idata[14:12] == 3'b000 ) begin
            // sb instruction . data_write_enable = 0001 ;
            dwe = 4'b0001 ;
        end

        else if ( idata[14:12] == 3'b001 ) begin
            // sh instruction . data_write_enable = 0011 ;
            dwe = 4'b0011 ;
        end
     
        else if ( idata[14:12] == 3'b010 ) begin
            // sw instruction . data_write_enable = 1111 ;
            dwe = 4'b1111 ;
        end

        else begin
            dwe = 0 ;
        end
     
    end
    

    else if ( clkreset_flag==1'b0 && opcode == 7'b0000011 )  //!  load instructions
    begin
             
        rs1 = idata[19:15] ;
        rs2 = 0 ;
        rd = idata[11:7] ;
        imm12_ext = {{20{idata[31]}} , idata[31:20]} ; 
        mux1_sel = 1 ;  // select immediate path
        mux2_sel = 1 ;
        alu_op = 0 ;  // 0 for ADD [adding address] 
        dwe = 0 ;
        l_unsign_flag = 0 ;
        rf_we = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        jal = 0 ;
        
        if ( idata[14:12] == 3'b000 && idata[11:7] != 0) begin  // lb instruction . 
            rf_we = 4'b0001 ;
            l_unsign_flag = 0 ;
        end

        else if ( idata[14:12] == 3'b001 && idata[11:7] != 0) begin  // lh instruction . 
            rf_we = 4'b0011 ;
            l_unsign_flag = 0 ;
        end

        else if ( idata[14:12] == 3'b010 && idata[11:7] != 0) begin  // lw instruction . 
            rf_we = 4'b1111 ;
            l_unsign_flag = 0 ;
        end

        //! lhu lbu check

        else if ( idata[14:12] == 3'b100 && idata[11:7] != 0) begin  // lbu instruction . 
            rf_we = 4'b0001 ;
            l_unsign_flag = 1 ;
        end

        else if ( idata[14:12] == 3'b101 && idata[11:7] != 0) begin  // lhu instruction . 
            rf_we = 4'b0011 ;
            l_unsign_flag = 1 ;
        end

        else begin
            rf_we = 4'b0000;
            l_unsign_flag = 0 ;
        end
    end
    
    else if ( clkreset_flag==1'b0 && opcode == 7'b0110111 )  //! LUI
    begin
        
        rs1 = 0 ;  // add 0
        rs2 = 0 ;  // not used 
        rd = idata[11:7] ;
        imm12_ext = { idata[31:12] , {12{1'b0}} };  // load immediate as the 20 bit immediate with trailing zeros
        mux1_sel = 1 ;  // choose immediate path
        mux2_sel = 0 ;  // write to RF from alu_out
        alu_op = 0 ;  // add operation
        dwe = 0 ;
        rf_we = 4'b1111 ;
        is_branch_type = 0 ;
        branch_condition  = 0 ;
        is_conditional_branch_type = 0 ;
        auipc = 0 ;
        jal = 0 ;
        l_unsign_flag = 0 ;

    end

    else if ( clkreset_flag==1'b0 && opcode == 7'b0010111 )  //! AUIPC
    begin
        
        rs1 = 0 ;  
        rs2 = 0 ;
        rd = idata[11:7] ;
        imm12_ext = { idata[31:12] , {12{1'b0}} } ;
        mux1_sel = 1 ;
        mux2_sel = 3 ; // input from branch_controller which calculates iaddr+imm
        rf_we = 4'b1111 ;
        alu_op = 0 ;
        dwe = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition = 0;
        l_unsign_flag = 0;
        auipc = 1 ;
        jal = 0 ;

        //! MUX3_SEL_CONTROLLER WILL TAKE CARE OF THE NEXT ADDRESS

    end

    else if ( clkreset_flag==1'b0 && opcode ==  7'b1100011 )  //! Branch instructions
    begin

        rs1 = idata[19:15] ;
        rs2 = idata[24:20] ;
        rd = 0 ;
        imm12_ext = { {21{idata[31]}} , idata[7] , {idata[30:25]} , {idata[11:8]} } ;
        mux1_sel = 0 ;
        mux2_sel = 0 ;
        alu_op = 0 ;
        rf_we = 0 ;
        dwe = 0 ;
        is_branch_type = 1 ;
        is_conditional_branch_type = 1 ;
        branch_condition  = 0 ;  // set to some known value
        l_unsign_flag = 0 ;
        auipc = 0 ;
        jal = 0 ;

        if ( idata[14:12] == 3'b000 ) begin  // BEQ
            alu_op = 10 ;  // check for equality
            branch_condition = 32'b1 ;
        end

        else if (idata[14:12] == 3'b001 ) begin  // BNE
            alu_op = 10 ;  // check for equality
            branch_condition = 32'b0 ;
        end

        else if (idata[14:12] == 3'b100 ) begin  // BLT
            alu_op = 3 ;  // slt
            branch_condition = 32'b1 ;
        end

        else if (idata[14:12] == 3'b101 ) begin  // BGE
            alu_op = 3 ;  // slt
            branch_condition = 32'b0 ;
        end

        else if (idata[14:12] == 3'b001 ) begin  // BLTU
            alu_op = 4 ;  // sltu
            branch_condition = 32'b1 ;
        end

        else if (idata[14:12] == 3'b110 ) begin  // BGEU
            alu_op = 4 ;  // sltu
            branch_condition = 32'b0 ;
        end

        else begin
            alu_op = 0 ;
            branch_condition = 0 ;
            is_branch_type = 0 ;
        end
    end
    
    else if ( clkreset_flag==1'b0 && opcode == 7'b1100111 )  // JALR
    begin

        // x[rd] <= pc + 4 
        // n_addr <= [ x[rs1] + imm12 ] and set last bit to 0 ;

        rs1 = idata[19:15] ;
        rs2 = 0 ;
        rd = idata[11:7] ;
        imm12_ext = { {20{idata[31]}} , idata[31:20] } ;
        alu_op = 11 ;  
        rf_we = 4'b1111 ;
        dwe = 0 ;
        l_unsign_flag = 0 ;
        mux1_sel = 1 ;  // select immediate path
        mux2_sel = 2 ;  // pc+4 path
        is_branch_type = 1 ;
        is_conditional_branch_type = 0 ;
        branch_condition = 0 ;
        auipc = 0 ;
        jal = 0 ;

    end

    else if ( clkreset_flag==1'b0 && opcode == 7'b1101111 )  // JAL
    begin

        // x[rd] <= pc+4
        // n_addr <= pc + (imm12_ext<<1)
        
        rs1 = 0 ; 
        rs2 = 0 ;
        rd = idata[11:7] ; 
        imm12_ext = { {13{idata[31]}} , idata[19:12] , idata[20] , idata[30:21] } ;  
        mux1_sel = 0 ;  // unused 
        mux2_sel = 2 ;  // pc+4
        l_unsign_flag = 0 ;
        rf_we = 4'b1111 ;
        dwe = 0 ;
        alu_op = 12 ; //! delete in ALU : unused
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition = 0 ;
        auipc = 0 ;
        jal = 1 ; //!

    end

    else begin
        rs1 = 0 ;
        rs2 = 0 ;
        rd = 0 ;
        imm12_ext = 0 ;
        is_branch_type = 0 ;
        is_conditional_branch_type = 0 ;
        branch_condition  = 0 ;
        auipc = 0 ;
        alu_op = 4'b1111 ;  // unused state
        l_unsign_flag = 0 ;
        dwe = 0 ;  // not enabled
        rf_we = 0 ;  // not enabled
        mux1_sel = 0 ; // no choice
        mux2_sel = 0 ; // no choice
        jal = 0 ;
    end

    end   // end of always block
endmodule