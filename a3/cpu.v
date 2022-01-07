//! this CPU has flags for each type of instruction for ease of decoding with verilog

module cpu (
    input clk, 
    input reset,
    input [31:0] idata,  // from IMEM - the 32 bit instruction
    input [31:0] drdata, // Data read from DMEM 
    output [31:0] iaddr, // address of instruction executed
    output [31:0] daddr, // address to write to in DMEM
    output [31:0] dwdata, // data to write to DMEM
    output [3:0] dwe
);
    reg [31:0] iaddr;
    reg [31:0] daddr;
    reg [31:0] dwdata;
    reg [3:0]  dwe;
    
    //! define wires
    
    // from control block
    wire [3:0] alu_op_wire;
    wire mux1_sel_wire ;
    wire mux2_sel_wire ;
    wire [5:0] itype_flag_wire ;
    wire [4:0] rs1_wire ;
    wire [4:0] rs2_wire ;
    wire [4:0] rd_wire ;
    wire [31:0] imm12_ext_wire ;
    wire l_unsign_flag_wire ;
    wire [31:0] imm20_ext_wire ;
    wire [4:0] shamt_wire ;
    wire [3:0] dwe_wire ;
    wire [3:0] rf_we_wire ;

    // from regfile
    wire [31:0] x0 ;
    wire [31:0] x1 ;
    wire [31:0] x2 ;
    wire [31:0] x3 ;
    wire [31:0] x4 ;
    wire [31:0] x5 ;
    wire [31:0] x6 ;
    wire [31:0] x7 ;
    wire [31:0] x8 ;
    wire [31:0] x9 ;
    wire [31:0] x10 ;
    wire [31:0] x11 ;
    wire [31:0] x12 ;
    wire [31:0] x13 ;
    wire [31:0] x14 ;
    wire [31:0] x15 ;
    wire [31:0] x16 ;
    wire [31:0] x17 ;
    wire [31:0] x18 ;
    wire [31:0] x19 ;
    wire [31:0] x20 ;
    wire [31:0] x21 ;
    wire [31:0] x22 ;
    wire [31:0] x23 ;
    wire [31:0] x24 ;
    wire [31:0] x25 ;
    wire [31:0] x26 ;
    wire [31:0] x27 ;
    wire [31:0] x28 ;
    wire [31:0] x29 ;
    wire [31:0] x30 ;
    wire [31:0] x31 ;


    wire [31:0] rf_op1_wire ;
    wire [31:0] rf_op2_wire ;
    wire [31:0] rf_op3_wire ;

    // from alu
    wire [31:0] alu_out_wire ;

    // from mux1
    wire [31:0] mux1_output_wire ;

    // from mux2
    wire [31:0] mux2_output_wire ;

    // from check_misalign
    wire [3:0] dwe_checked_wire;
    wire [3:0] rf_we_checked_wire ;
    wire [31:0] drdata_checked_wire ;
    wire [31:0] dwdata_checked_wire ;

     // workaround for reset phase instruction loading
    reg clkreset_flag ; 

    //! control

    control CONT ( //inputs
                   .reset(reset) ,
                   .idata(idata) ,
                   
                  // outputs 
                   .alu_op(alu_op_wire) ,
                   .mux1_sel(mux1_sel_wire) ,
                   .mux2_sel(mux2_sel_wire) ,
                   .itype_flag(itype_flag_wire) ,
                   .rs1(rs1_wire) ,
                   .rs2(rs2_wire) ,
                   .rd(rd_wire) ,
                   .imm12_ext(imm12_ext_wire) ,
                   .imm20_ext(imm20_ext_wire) ,
                   .shamt(shamt_wire) ,
                   .dwe(dwe_wire) ,
                   .rf_we(rf_we_wire) ,
                   .l_unsign_flag(l_unsign_flag_wire) );
    
    //! regfile
    
    reg_file RF ( // inputs
                  .reset(reset) ,
                  .clk(clk) ,
                  .rf_we(rf_we_checked_wire) ,
                  .rf_wdata(mux2_output_wire) , 
                  .itype_flag(itype_flag_wire) ,
                  .rs1 (rs1_wire) ,
                  .rs2(rs2_wire) ,
                  .rd(rd_wire) ,
                  .imm12_ext(imm12_ext_wire) ,
                  .imm20_ext(imm20_ext_wire) ,
                  .l_unsign_flag(l_unsign_flag_wire) ,
                  
                  // outputs
                  
                  .x0(x0) , 
                  .x1(x1) , 
                  .x2(x2) , 
                  .x3(x3) , 
                  .x4(x4) , 
                  .x5(x5) , 
                  .x6(x6) , 
                  .x7(x7) , 
                  .x8(x8) , 
                  .x9(x9) , 
                  .x10(x10) , 
                  .x11(x11) , 
                  .x12(x12) , 
                  .x13(x13) , 
                  .x14(x14) , 
                  .x15(x15) , 
                  .x16(x16) , 
                  .x17(x17) , 
                  .x18(x18) , 
                  .x19(x19) , 
                  .x20(x20) , 
                  .x21(x21) , 
                  .x22(x22) , 
                  .x23(x23) , 
                  .x24(x24) , 
                  .x25(x25) , 
                  .x26(x26) , 
                  .x27(x27) , 
                  .x28(x28) , 
                  .x29(x29) , 
                  .x30(x30) , 
                  .x31(x31) , 

                  .rf_op1(rf_op1_wire) , 
                  .rf_op2(rf_op2_wire) , 
                  .rf_op3(rf_op3_wire)  );

    //! ALU 

    alu ALU ( // inputs
              .alu_op(alu_op_wire) ,
              .operand1(rf_op1_wire) , 
              .operand2(mux1_output_wire) , 
              
              // outputs
              .alu_out(alu_out_wire) ) ;

    //! mux1

    mux MUX1 ( // inputs
               .mux_sel(mux1_sel_wire) ,
               .input0(rf_op2_wire) ,
               .input1(rf_op3_wire) ,
               
               // outputs
               .mux_output(mux1_output_wire) );

    //! mux2

    mux MUX2 ( // inputs
               .mux_sel(mux2_sel_wire) ,
               .input0(alu_out_wire) ,
               .input1(drdata_checked_wire) ,
               
               // outputs
               .mux_output(mux2_output_wire) );


    check_misalign Dcheck ( // inputs
                            .opcode(idata[6:0]) ,
                            .dwe(dwe_wire) ,
                            .daddr(alu_out_wire) ,
                            .rf_we(rf_we_wire) ,
                            .dwdata(rf_op2_wire) ,
                            .drdata(drdata) ,

                            // outputs
                            .dwe_checked(dwe_checked_wire) ,
                            .rf_we_checked(rf_we_checked_wire) ,
                            .dwdata_checked(dwdata_checked_wire) ,
                            .drdata_checked(drdata_checked_wire) );

    //! connecting wires
    // ** Done : Review connections. Draw schematic on paper and assign wires

    always @(*) begin
        daddr = alu_out_wire ;  // initialised as a reg, so can assign only in procedural blocks
        dwdata = dwdata_checked_wire ;  // value of x[rs2] after checking for misalignment
        dwe = dwe_checked_wire ; 
    end

    //given code 

    integer count = 0 ;
    always @(posedge clk) begin
        if (reset) begin
            iaddr <= 0;
            daddr <= 0;
            dwdata <= 0;
            dwe <= 0;
            clkreset_flag <= 1 ;
        end 
        
        else if ( clkreset_flag ) begin  // workaround for instruction 1 loading during reset
            clkreset_flag <= 0 ;
            // printing
            // if (count < 20 ) begin
                
            //     $display("Instruction = %h , x14 = %d ", idata , x14) ;    
            //     count = count + 1 ;
                
            // end
        end
         
        else  if ( !clkreset_flag )   begin 
            iaddr <= iaddr + 4;
            // printing
            // if (count < 20 ) begin
                
            //     $display("Instruction = %h , x14 = %d ", idata , x14) ;    
            //     count = count + 1 ;

            // end
        end
    end

endmodule
