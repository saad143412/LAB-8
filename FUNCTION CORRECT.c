#include<stdio.h>
void function_A();
void function_B();
void function_C();
void main()
{
	function_A();
	function_B();
	function_C();
}
function_A()
{
	printf("You are in function_A\n");
}
function_B()
{
	printf("You are in function_B\n");
}
function_C()
{
	printf("You are in function_C");
}
