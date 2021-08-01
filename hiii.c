#include<stdio.h>
void function_A(); //function's prototype
void function_B();

void main()
{
	function_A(); //function's call
	function_B();
}
function_A()
{
	printf("Hi_A\n");
}
function_B()
{
	printf("Hi ali_B");
}
