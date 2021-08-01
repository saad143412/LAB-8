#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163          || */
  	 
	printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163\n\n");
	
	int num,product=0;           //declearation of num
	printf("plz enter a number you want to product:\n");
	printf("\t\t ************************************ \n");
	
	do                     
    {
    	scanf("%d",&num);  
    	product = product + num;
     	
    }                      //End of Enternal Block
	while(num!=1);         //!= this is use for not equal to
	printf("\t\t ************************************ \n");
	printf("TOTAL : %d",product);

}                        //End of Main Block


