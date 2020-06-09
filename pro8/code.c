/* Write a program that takes three integers, and prints out the smallest number.
*
* created by Ahmed_Elkhodary
*/
# include <stdio.h>
# include <math.h>

bool is_perfect_square(long double a)
{ 
    long double  squareRoot;
	squareRoot = sqrt(a);
	return (( squareRoot - floor(squareRoot) ) == 0);
}


int main (void)
{ 
    long double num, squareRoot ;  
    while (1)
    {
    	printf("Enter anumber: ");
	    scanf("%f", &num);
	   
	    if(num < 0){
	    	printf("enter positive number\n");
	    	continue;
		}
        if (is_perfect_square(num))
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	
	
	scanf("%d");
	return 0 ; 
}
