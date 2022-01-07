// to check if in a store type intr, address is a multiple of 4
// ignore instruction if address is invalid.

module check_misalign (
    input [31:0] daddr ,
    input [6:0] opcode ,
    input mux2_sel ,
    input [3:0] dwe ,
    input [31:0] dwdata ,
    input [3:0] rf_we ,
    input [31:0] drdata ,
    output reg [3:0] dwe_checked ,
    output reg [31:0] dwdata_checked ,
    output reg [3:0] rf_we_checked ,
    output reg [31:0] drdata_checked
);
    always @(*) begin
        
        if ( dwe != 4'd0 ) begin  //! it was a store instruction - address calculated by ALU ; and rf_we = 0 for sure 
            
            //! corrections for sb instruction
            if ( dwe == 4'd1 && daddr[1:0] == 2'b00 ) begin  // sb with write to byte 0 of 3
                dwe_checked = dwe ;
                dwdata_checked = dwdata ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            else if ( dwe == 4'd1 && daddr[1:0] == 2'b01 ) begin  // sb with byte 1 of 3, to write to
                dwe_checked = 4'b0010 ;
                dwdata_checked = dwdata<<8 ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            else if ( dwe == 4'd1 && daddr[1:0] == 2'b10 ) begin  // sb with byte 2 of 3, to write to
                dwe_checked = 4'b0100 ;
                dwdata_checked = dwdata<<16 ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            else if ( dwe == 4'd1 && daddr[1:0] == 2'b11 ) begin  // sb with byte 3 of 3, to write to
                dwe_checked = 4'b1000 ;
                dwdata_checked = dwdata<<24 ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            //! correction for sh instruction
            else if ( dwe == 4'd3 && daddr[1:0] == 2'b00 ) begin  // sh with write to bytes 0,1 out of 3
                dwe_checked = 4'b0011 ;
                dwdata_checked = dwdata ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            else if ( dwe == 4'd3 && daddr[1:0] == 2'b10 ) begin  // sh with write to bytes 2,3 out of 3
                dwe_checked = 4'b1100 ;
                dwdata_checked = dwdata<<16 ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            //! correction for sw instruction - here no correction has been initiated 
            else if ( dwe == 4'd15 && daddr[1:0] == 2'b00 ) begin  // sw with write to bytes 3,2,1,0 out of 3
                dwe_checked = 4'b1111 ;
                dwdata_checked = dwdata ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
            end

            else begin  //! other cases are misaligned - hopefully won't be encountered
                dwe_checked = 0 ;
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
                dwdata_checked = 0 ;
            end

        end

        else if ( rf_we != 4'd0 && opcode == 7'b0000011) begin  //! make any changes only if it is a load type instruction - check opcode
            
            //! corrections for lb instructions
            if ( rf_we == 4'b0001 && daddr[1:0] == 2'b00 ) begin  // lb with write from byte 0 of 3
                rf_we_checked = 4'b0001 ;
                drdata_checked = drdata ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            else if ( rf_we == 4'b0001 && daddr[1:0] == 2'b01 ) begin  // lb with write from byte 1 of 3 
                rf_we_checked = 4'b0001 ;
                drdata_checked = drdata>>8 ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            else if ( rf_we == 4'b0001 && daddr[1:0] == 2'b10 ) begin  // lb with write from byte 2 of 3  
                rf_we_checked = 4'b0001 ;
                drdata_checked = drdata>>16 ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            else if ( rf_we == 4'b0001 && daddr[1:0] == 2'b11 ) begin  // lb with write from byte 3 of 3  
                rf_we_checked = 4'b0001 ;
                drdata_checked = drdata>>24 ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            //! correections for lh instructions
            else if ( rf_we == 4'b0011 && daddr[1:0] == 2'b00 ) begin  // lh with write from byte 0,1 of 3  
                rf_we_checked = 4'b0011 ;
                drdata_checked = drdata ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            else if ( rf_we == 4'b0011 && daddr[1:0] == 2'b10 ) begin  // lh with write from byte 2,3 of 3  
                rf_we_checked = 4'b0011 ;
                drdata_checked = drdata>>16 ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            //! corrections for lw instructions and other writes by word 
            else if ( rf_we == 4'b1111 && daddr[1:0] == 2'b00 ) begin  // lw with write from byte 0,1,2,3 of 3 OR any other types so no change
                rf_we_checked = 4'b1111 ;
                drdata_checked = drdata ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

            else begin  //! misaligned ?
                rf_we_checked = 0 ;
                drdata_checked = 0 ;
                dwe_checked = 0 ;
                dwdata_checked = 0 ;
            end

        end
        
        else begin
            dwe_checked = dwe ;
            dwdata_checked = dwdata ;
            rf_we_checked = rf_we ;
            drdata_checked = drdata ;
        end

    end

endmodule
