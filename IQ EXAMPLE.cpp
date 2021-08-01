#include<stdio.h>
int main()
{
	int a;
	while(1);
	{
		printf("Enter the value of your IQ:");
		scanf("%d",&a);
		if(a<100 && a>0)
		{
			printf("high IQ\n");
		}
		else if(a>100 && a>330)
		{
			printf("more high IQ");
		}
	}
}
