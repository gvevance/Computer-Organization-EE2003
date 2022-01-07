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
   input [`width-1:0] 	 a, b;
   // *** Output declaration for 'p'
   output [15:0] p;
   output 		 rdy;
   
   // *** Register declarations for p, multiplier, multiplicand
   reg [15:0] p,multiplier,multiplicand;
   reg 			 rdy;
   reg [`ctrwidth:0] 	 ctr;
   reg [15:0] term;                                    // register to keep track of what to add to p

   always @(posedge clk or posedge reset) begin
     if (reset) begin          

	// at the beginning reset is applied. This behaves more like a start signal than a reset
	
	rdy 		<= 0;
	p 		<= 0;
	ctr 		<= 0;
	multiplier 	<= {{`width{a[`width-1]}}, a}; // sign-extend
	multiplicand 	<= {{`width{b[`width-1]}}, b}; // sign-extend

     end                              // end of reset if block

     else begin                       
	
	// this else block executes at posedge clk

	if (ctr < 16 )               // executes when ctr is less than 16 acc to logic of seq_mult8
	   begin
	
	      // *** Code for multiplication
	      if ( multiplier[ctr] == 1 )
                 begin
                    
                    multiplicand <= multiplicand << 1;
                    p <= p + multiplicand;
                    //$display("bit=1; p = %b ctr = %b",p,ctr);
		    ctr <= ctr + 1;          
	       	 
                 end

              else
                 begin

                    multiplicand <= multiplicand << 1;
                    ctr <= ctr + 1;
                 
                 end

           end                                        // end of ctr < 16 if block 
	  
	   else begin                                 // else block executes when multiplication is over  
	     
              rdy <= 1; 		// Assert 'rdy' signal to indicate end of multiplication
	  
	   end                                        // end of rdy else block 
     
      end                                            // end of else block within always ( posedge clk )

   end                                               // end of always block

endmodule // seqmult
 
