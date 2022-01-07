/*  input is idata from IMEM
    outputs are various control signals

    itype_flag = 1 for R type
               = 2 for I type
               = 4 for S type
               = 8 for B type
               = 16 for U type
               = 32 for B type

*/
module control (
    input reset ,
    input [31:0] idata ,
    
    //! control signals
    output reg [3:0] alu_op,
    output reg mux1_sel ,
    output reg mux2_sel ,
    output reg [5:0] itype_flag ,
    output reg [3:0] dwe ,
    output reg [3:0] rf_we , // reg file write enable
    output reg l_unsign_flag ,
    
    //! address or imm types (+shamt)
    output reg [4:0] rs1 , 
    output reg [4:0] rs2 ,
    output reg [4:0] rd ,
    output reg [31:0] imm12_ext ,
    output reg [31:0] imm20_ext ,
    output reg [4:0] shamt 
);
    wire [6:0] opcode;
    assign opcode = idata[6:0]; 

    always @(*) begin
	
    if (reset) begin
        
        // reset addresses and immediate (tyoes)
        rs1 = 0 ;
        rs2 = 0 ;
        rd = 0 ;
        imm12_ext = 0 ;
        imm20_ext = 0 ;
        shamt = 0 ;
        
        // reset control signals to some default state as a flag - good if it signals unused value
        itype_flag = 0 ;  // unused state
        alu_op = 4'b1111 ;  // unused state
        l_unsign_flag = 0 ;
        dwe = 0 ;  // not enabled
        rf_we = 0 ;  // not enabled
        mux1_sel = 0 ; // no choice
        mux2_sel = 0 ; // no choice

    end

    else if ( opcode == 7'b0110011 )   //! R type instruction format with rs2 - to be executed only if rd != 0
    begin
            
        itype_flag = 6'b000001 ;  // flag for R type instruction
        rs1 = idata[19:15] ;
        rs2 = idata[24:20] ;
        rd = idata[11:7] ;
        mux1_sel = 0 ;
        mux2_sel = 0 ;
        dwe = 4'b0000 ;
        rf_we = 0 ;

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
        
    end

    //! CHECK FOR SIGN EXTENSION 

    else if ( opcode == 7'b0010011  )  //! I-type instructions - including 12 bit imm and immediate shift type
    begin
            
        rs1 = idata[19:15] ;
        rd = idata[11:7] ;
        rs2 = idata[24:20] ;  // this is for slli , srli , srai
        itype_flag = 6'b000010 ;  // flag for I type instruction 
        rf_we = 0 ;
        mux1_sel = 1 ;
        mux2_sel = 0 ;
        dwe = 0 ;

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
        
        if ( idata[14:12] == 3'b001 && idata[11:7] != 5'd0) 
        begin
            alu_op = 2 ; //! 2 for slli
            shamt = idata[24:20] ;  // not used but for reference
            // shamt == rs2 ( addresses are same )
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
        end

        else if ( idata[14:12] == 3'b101 && idata[31:25] == 7'b0000000 && idata[11:7] != 5'd0) 
        begin
            alu_op = 6 ; //! 6 for srli
            shamt = idata[24:20] ;  // not used but for reference
            // shamt == rs2 ( addresses are same )
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
        end
            
        else if ( idata[14:12] == 3'b101 && idata[31:25] == 7'b0100000 && idata[11:7] != 5'd0) 
        begin
            alu_op = 7 ; //! 12 for srai 
            shamt = idata[24:20] ;  // not used but for reference
            // shamt == rs2 ( addresses are same )
            mux1_sel = 0 ;
            rf_we = 4'b1111 ;
        end 
        
    end

    else if ( opcode == 7'b0100011 )  //! S-type instructions 
    begin
            
        rs1 = idata[19:15] ;
        rs2 = idata[24:20] ;
        imm12_ext = {{20{idata[31]}} , {idata[31:25]} , {idata[11:7]}} ;
        mux1_sel = 1 ;
        mux2_sel = 0 ;  // does not matter ; actually don't care
        rf_we = 0 ;
        alu_op = 0;  // 0 for signed addition
        itype_flag = 6'b000100 ;  // flag for S type
        l_unsign_flag = 0 ;
        dwe = 0 ;
        
        if ( idata[14:12] == 3'b000 ) begin
            // sb instruction . data_write_enable = 0001 ;
            dwe = 4'b0001 ;
        end

        else if ( idata[14:12] == 3'b001 ) begin
            // sh instruction . data_write_enable = 0011 ;
            dwe = 4'b0011 ;
        end
     
        if ( idata[14:12] == 3'b010 ) begin
            // sw instruction . data_write_enable = 1111 ;
            dwe = 4'b1111 ;
        end
     
    end
    

    else if ( opcode == 7'b0000011 )  //!  load instructions
    begin
             
        rs1 = idata[19:15] ;
        rd = idata[11:7] ;
        imm12_ext = {{20{idata[31]}} , idata[31:20]} ;  
        mux1_sel = 1 ;  // select immediate path
        itype_flag = 6'b000010 ;  // flag for I type instruction 
        alu_op = 0 ;  // 0 for ADD [adding address] 
        dwe = 0 ;
        rs2 = 0 ;
        mux2_sel = 1 ;
        rf_we = 0 ;
        
        if ( idata[14:12] == 3'b000 && idata[11:7] != 0) begin  // lb instruction . 
            rf_we = 4'b0001 ;
            l_unsign_flag = 0 ;
        end

        else if ( idata[14:12] == 3'b001 && idata[11:7] != 0) begin  // lh instruction . 
            rf_we = 4'b0011 ;
            l_unsign_flag = 0 ;
        end

        if ( idata[14:12] == 3'b010 && idata[11:7] != 0) begin  // lw instruction . 
            rf_we = 4'b1111 ;
            l_unsign_flag = 0 ;
        end

        //! lhu lbu check

        if ( idata[14:12] == 3'b100 && idata[11:7] != 0) begin  // lbu instruction . 
            rf_we = 4'b0001 ;
            l_unsign_flag = 1 ;
        end

        if ( idata[14:12] == 3'b101 && idata[11:7] != 0) begin  // lhu instruction . 
            rf_we = 4'b0011 ;
            l_unsign_flag = 1 ;
        end
    end
   
    end   // end of always block
endmodule