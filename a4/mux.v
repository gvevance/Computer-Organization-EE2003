// MUX 
module mux (
    input [31:0] input0 ,
    input [31:0] input1 ,
    input mux_sel ,
    output reg [31:0] mux_output 
);

    always @(*) begin
        if ( mux_sel == 0 )    mux_output = input0 ;       // coming from regfile
        else                   mux_output = input1 ;       // coming directly from the instruction  
    end
    
endmodule
