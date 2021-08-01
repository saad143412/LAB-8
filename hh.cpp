#include<stdio.h>
int main()
{
	int a=1001;
	printf("a is %d\t",a);
	
	int b=2002;
	printf("b is %d\t",b);
	
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("a is %d\t",a);
	printf("b is %d\t",b);
	return 0;
}
