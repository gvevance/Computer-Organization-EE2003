# gen.py

for i in range(32):
    print(f"always @(x[{i}]) begin\n\t$display(\"x{i} changed to %d at instruction = %h , at address = %d\",x[{i}],idata,iaddr);\nend")