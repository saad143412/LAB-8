#include<stdio.h>
int main()
{
	//printf("Programmer Name:Muhammad Saad\nReg.No.:20MDELE163\n");
    int number1,number2;
    printf("Enter two number: ");
    scanf("%d %d",&number1,&number2);
    if(number1>=number2){
    	if(number1==number2){
    		printf("%d=%d",number1,number2);
		}
		else{
		printf("%d>%d",number1,number2);
	}
	else{
		printf("%d<%d",number1,number2);
	}
    
	
    
    
}
