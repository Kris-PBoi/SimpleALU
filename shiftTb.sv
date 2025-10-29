module shiftTb();
reg [7:0]a_i;
reg [7:0]b_i;
wire [7:0]outLeft;
wire [7:0]outRight;

leftShift  #(8) uut1(.a_i(a_i), .b_i(b_i), .outLeft(outLeft));
rightShift #(8) uut2(.a_i(a_i), .b_i(b_i), .outRight(outRight));
initial begin
a_i = 8'b011010011;    
b_i = 8'b001101100;

#10

$display("a = %8b", a_i);
$display("b = %8b", b_i);
$display("Output for left shift = %8b", outLeft);
$display("Output for right shift= %8b", outRight);

$finish;
end
endmodule