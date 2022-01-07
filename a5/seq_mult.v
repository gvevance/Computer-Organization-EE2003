//                              -*- Mode: Verilog -*-
// Filename        : seq-mult.v
// Description     : Sequential multiplier
// Author          : Nitin Chandrachoodan

// This implementation corresponds to a sequential multiplier, but
// most of the functionality is missing.  Complete the code so that
// the resulting module implements multiplication of two numbers in
// twos complement format.

// All the comments marked with *** correspond to something you need
// to fill in.

// This style of modeling is 'behavioural', where the desired
// behaviour is described in terms of high level statements ('if'
// statements in verilog).  This is where the real power of the
// language is seen, since such modeling is closest to the way we
// think about the operation.  However, it is also the most difficult
// to translate into hardware, so a good understanding of the
// connection between the program and hardware is important.

`define width 8
`define ctrwidth 4

module seq_mult (
		 // Outputs
		 p, rdy, 
		 // Inputs
		 clk, reset, a, b
		 ) ;
   input 		 clk, reset;
   input [7:0] 	 a, b;
   // *** Output declaration for 'p'
   output [15:0] p;
   output 		 rdy;
   
   // *** Register declarations for p, multiplier, multiplicand
   reg [15:0] p,multiplier,multiplicand;
   reg 			 rdy;
   reg [4:0] 	 ctr;
   reg [15:0] term;                                    // register to keep track of what to add to p

   always @(posedge clk or posedge reset) begin
      if (reset) begin          
	      
         // at the beginning reset is applied. This behaves more like a start signal than a reset
	      rdy 		<= 0;
	      p 		<= 0;
	      ctr 		<= 0;
	      multiplier 	<= {{8{a[7]}}, a}; // sign-extend
	      multiplicand 	<= {{8{b[7]}}, b}; // sign-extend

      end                              // end of reset if block

      else begin                       
	
	   if (ctr < 16 ) begin            // executes when ctr is less than 16 acc to logic of seq_mult8 
	
	      // *** Code for multiplication
	      if ( multiplier[ctr] == 1 ) begin
            multiplicand <= multiplicand << 1;
            p <= p + multiplicand;
            ctr <= ctr + 1;          
         end

         else begin
            multiplicand <= multiplicand << 1;
            ctr <= ctr + 1;
         end

      end                                        // end of ctr < 16 if block 
	  
	   else rdy <= 1;                                  // else block executes when multiplication is over; rdy <= 1
      
      end                                        // end of else block within always ( posedge clk )

   end                                               // end of always block

endmodule // seqmult
 
