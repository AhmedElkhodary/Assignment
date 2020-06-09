/*
* Write a program that reads a positive integer and checks if it is a prime.
*
* created Ahmed_Elkhodary
*/
# include <stdio.h>
# include <math.h>

bool is_primeNumber(unsigned long int a)
{ 
    int i;
    for(i = 2; i <= a/2 ; i++){
    	if((a % i) == 0){
    		return(false);
    		break;
		}
	}
	return (true);
}

int main (void)
{ 
    unsigned long int num;  
    while (1)
    {
    	printf("Enter anumber: ");
	    scanf("%ld", &num);
	   
	    if(num < 0){
	    	printf("enter positive number\n");
	    	continue;
		}
        
		if (is_primeNumber(num))
		printf("YES the number is prime\n");
		else
		printf("NO the number is prime\n");
		
	}
	
	scanf("%d");
	return 0 ; 
}

