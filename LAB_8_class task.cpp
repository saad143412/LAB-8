#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163          || */
  	 
	printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163\n\n");
	
	int i,j=1000;           
	printf("plz enter a number you want to product:\n");
	printf("\t\t ************************************ \n");
	
	do                     
    {
    	scanf("%d",&i);  
    	j*=i;
     	
    }                      //End of Enternal Block
	while(i!=1000);         //!= this is use for not equal to
	printf("\t\t ************************************ \n");
	printf("product : %d",j);

}                        //End of Main Block


