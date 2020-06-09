/*
* Write a program that take two integers from the user 
* and print the results of this equation:
* Result = ((num1 + num2) * 3) – 10
*
* created by Ahmed_Elkhodary
*/



# include <stdio.h>

int main (void)
{ 
    int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	
	
	printf("(%d + %d) * 3) - 10 = %d", num1, num2,((num1 + num2) * 3) - 10);
	
	
	scanf("%d");
	return 0 ; 
}
