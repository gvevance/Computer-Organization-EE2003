// PC module takes a 32 bit address as input  and at the next 
// clock edge updates 32 bit output with the address input to it
// pc is only needed in A4

module pc (
    input [31:0] n_addr ,
    output [31:0] iaddr
);
    assign n_addr = iaddr ;    
endmodule