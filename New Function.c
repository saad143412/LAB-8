#include<stdio.h>
void Peshawar ();
void Mardan ();
void Islamabad ();

void main()
{
	printf("I am in main\n");
	Peshawar ();
	printf("I am finally back in main\n");
}
void Peshawar ()
{
	printf("I am in peshawar\n");
	Mardan ();
	printf("I am back in Peshawar\n");
}
void Mardan ()
{
	printf("I am in Mardan\n");
	Islamabad ();
	printf("I am back in Mardan\n");
}
void Islamabad ()
{
	printf("I am in Islamabad\n");
}
