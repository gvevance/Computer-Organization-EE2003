// 4 input mux for branch select
// called mux3 because it is the 3rd mux I thought of

module mux4input (
    input [31:0] input0 ,
    input [31:0] input1 ,
    input [31:0] input2 ,
    input [31:0] input3 ,
    input [1:0] mux_sel ,  // 2 bit select line
    output reg [31:0] mux_out
);
    always @(*) begin
        
        case (mux_sel) 
            2'd0     : mux_out = input0 ;
            2'd1     : mux_out = input1 ;
            2'd2     : mux_out = input2 ;
            2'd3     : mux_out = input3 ;

            default  : mux_out = 0 ;
            
        endcase
    end
endmodule