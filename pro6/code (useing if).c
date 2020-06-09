/*
* Write a program that reads a student grade percentage 
* and prints "Excellent" if his grade is greater than or 
* equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass“
* for 50, "Fail" for less than 50.
*
* created by Ahmed_Elkhodry
*/

# include <stdio.h>


int main (void)
{
	int grade;
	printf("Enter student grade : ");
	scanf("%d",&grade);
	
	
	if( (grade >=0 ) && (grade <=100) )
	{
		if(grade >= 85){
			printf("Excellent");
		}
		else if(grade >= 75){
			printf("Very Good");			
		}
		else if(grade >= 50){
			printf("Good");			
		}
		else{
			printf("Fail");				
		}
	
	} 
	else{
		printf("error input number should be between (1:100)");	
	   	
	}

	scanf("%d");
	return 0 ; 
}
