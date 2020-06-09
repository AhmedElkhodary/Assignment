/*
* Write a program that reads the radius of 
* a circle and calculates the area and circumference
*
* created by Ahmed_Elkodary
*/

# include <stdio.h>
#define PI 3.14

int main (void)
{
	
	float radius, circumference, area;
	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);
	
	circumference = 2 * PI * radius;
	area = PI * (radius * radius);
	
	printf("circumference= %.2f",circumference);
	printf("\narea= %.2f",area);
	
	
	scanf("%d");
	return 0 ; 
}
