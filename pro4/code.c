/*
*  Print sum of first 100 integers. (With data validation)
*
* created by Ahmed_Elkhodary
*/

# include <stdio.h>


int main (void)
{ 
    int i , sum = 0 ;
	for( i = 1 ; i <= 100; i++)
	{
		sum += i;
		printf("The summtion %d + %d = %d\n", sum-i, i, sum);
	}
	
	
	
	scanf("%d");
	return 0 ; 
}
