/*
* Write a program that reads a positive integer and computes the factorial.
*
* created by Ahmed_Elkhodary
*/

# include <stdio.h>
# include <math.h>

unsigned long long int factorial(unsigned int n)
{
	if(n == 1)
	return 1;
	else{
		return n * factorial(n-1);
	}
    
}

int main (void)
{ 
    unsigned int num;  
    while (1)
    {
    	printf("Enter anumber: ");
	    scanf("%lld", &num);
	   
	    if(num < 0){
	    	printf("enter positive number\n");
	    	continue;
		}
        
		printf("%d\n",factorial(num));

		
	}
	
	scanf("%d");
	return 0 ; 
}


