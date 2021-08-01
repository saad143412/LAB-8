#include<stdio.h>
void fun();
void hi();

void main()
{
	fun();
	hi();
}
fun()
{
	printf("You are in function A\n");
}
hi()
{
	printf("You are in function B\n");
}
