#include<stdio.h>
void Peshawar ();
void Mardan ();
void Islamabad ();

void main()
{
	printf("in main\n");
	Peshawar();
	printf("back in main\n");
}
void Peshawar ()
{
	printf("in peshawar\n");
	Mardan()
	printf("back in Peshawar\n");
}
void Mardan ()
{
	printf("in Mardan");
	Islamabad();
	printf("back in Mardan\n");
}
void Islamabad ()
{
	printf("in Islamabad\n");
}
