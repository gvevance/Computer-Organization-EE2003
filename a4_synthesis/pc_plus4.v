// module that adds 4 to iaddr

module pc_plus4 (
    input[31:0] input_iaddr ,
    output [31:0] out_pc_plus4
);
    assign out_pc_plus4 = input_iaddr + 32'd4 ;

endmodule