/*
* Write a program that reads a student grade percentage
* and prints "Excellent" if his grade is greater than or equal 85, 
* "Very Good" for 75 or greater; "Good" for 65, "Pass“
* for 50, "Fail" for less than 50.
*
* created by Ahmed_Elkhodary
*/
# include <stdio.h>


int main (void)
{
	int grade;
	printf("Enter student grade : ");
	scanf("%d",&grade);
	
	switch (grade)
	{
		case 85 ... 100:{
			printf("Excellent");			
			break;
		}
		case 75 ... 84:{
			printf("Very good");			
			break;
		}
		case 50 ... 74:{
			printf("Good");			
			break;
		}
		case 0 ... 49:{
			printf("Fail");			
			break;
		}						
		default:{	
	      	printf("error input number should be between (1:100)");				
			break;
		}
	}
	
	scanf("%d");
	return 0 ; 
}

