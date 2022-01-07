// alu

module alu (
    input [3:0] alu_op ,
    input [31:0] operand1 ,
    input [31:0] operand2 ,
    output reg [31:0] alu_out
);
    always @(*) begin

        case ( alu_op ) 
            4'd0         :  alu_out = (operand1) + (operand2) ; // add(i)
            4'd1         :  alu_out = (operand1) - (operand2) ; // sub
            4'd2         :  alu_out = operand1 << operand1 ; // sll
            4'd3         :  alu_out = ( $signed(operand1) < $signed(operand2) )? 32'b1 : 32'b0 ; // slt
            4'd4         :  alu_out = ( $unsigned(operand1) < $unsigned(operand2) )? 32'b1 : 32'b0 ; // sltu
            4'd5         :  alu_out = operand1 ^ operand2 ; // xor
            4'd6         :  alu_out = operand1 >> operand2 ; // srl
            4'd7         :  alu_out = $signed(operand1) >>> operand2 ; // sra
            4'd8         :  alu_out = operand1 | operand2 ; // or
            4'd9         :  alu_out = operand1 & operand2 ; // and 

            4'd10        :  alu_out = ( operand1 == operand2 )? 32'b1 : 32'b0 ;  // to check for equality for branch instrcutions
            4'd11        :  begin
                                alu_out = operand1 + operand2 ;
                                alu_out[0] = 0 ;
                            end  //! this is for JALR intruction

            // 4'd12        :  alu_out = operand1 + (operand2<<1) ;  //! this is for JAL instruction
            
            default   :  alu_out = 0 ;
        endcase       
    
    end

endmodule

//! ALU DOES ONLY THE OPERATIONS REQUESTED OF IT AND IS NOT SMART.