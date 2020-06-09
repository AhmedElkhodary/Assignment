/*
* Write a program that takes three integers, and prints out the smallest number.
*
* created by Ahmed_Elkhodary 
*/

# include <stdio.h>


int main (void)
{
	int num1, num2 ,num3;
	printf("Enter three interger number: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	(num1 > num2)?  ((num1 > num3 )? printf("%d",num1) : printf("%d",num3)) :  
	                ((num2 > num3 )? printf("%d",num2) : printf("%d",num3)) ;
	
	scanf("%d");
	return 0 ; 
}


