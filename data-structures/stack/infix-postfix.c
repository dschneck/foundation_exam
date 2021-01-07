/*
Infix to postfix rules!!!

	1. 	Print operands as they arrive

	2. 	IF stack is empty or contains a left parentheses on top, push the incoming
		operator onto the top of the stack

	3. 	If incoming symbol is '(', push it onto the stack

	4. 	If incoming symbol is ')', pop the stack and print the operators until
		the left parentheses is found.
	
	5. 	If incoming symbol has higher precedence than the top of the stack, push it onto 
		the stack

	6.  If incoming symbol has lower precedence than the top of the stack, pop and print the top.
		Then test the incoming operator against the new top of the stack.

	7. If incoming operator has equal precedence with the top of the stack, use the associativity rule 

	8. At the end of the expression, pop and print all of the operators off of the stack

	Precedence is determined by PEMDAS

	Associativity Rules:
		- L to R then pop and print the top of the stack, then push the incoming operator (+&-, *&/)
		- R to L then push the incoming operator 

*/

#include <stdio.h>

int main() {



	return 0;
}
