/*
* Write a program that print the relation between 
* two integer number if those numbers are equal, 
* not equal and which one contain the higher value.
*
* created by Ahmed_Elkhodary
*/

# include <stdio.h>


int main (void)
{
	int num1, num2;
	printf("Enter two number:");
	scanf("%d%d", &num1, &num2);
	
	if(num1 > num2) 
	printf("%d",num1);
	
	else if(num1 < num2) 
	printf("%d",num2);
	
	else printf("equl");
	
	
	
	scanf("%d");
	return 0 ; 
}
