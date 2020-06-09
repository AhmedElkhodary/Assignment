/*
*
* Write a program to display the following stars pattern.
                                       *
                                      ***
                                     *****
                                    *******
                                   *********
                                  ***********
* any number of lines ;)
*
* created by Ahmed_Elkhodary
*/

# include <stdio.h>
# include <math.h>

void print_shape(int n)
{   int i , j, k, p, m;
	int dot_num, star_num;
	p = n;
	m = 0;
    
	for(i = 1 ; i <= n ; i++, p-- )
	{
		
		for(j = p-1 ; j >=1 ; j-- )
		{
			printf(" ");
		}
		
		for(k = 1 ; k <= i+m ; k++)
		{
			printf("*");
		}
		m++;
		
		printf("\n");
	       
	}
		 	 
}

int main (void)
{ 
    int num_line;
	printf("Enter number of lines: ");
	scanf ("%d",&num_line);
	
	print_shape(num_line);
	
	
	scanf("%d");
	return 0 ; 
}


