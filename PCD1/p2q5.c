/*
Prorame Filename: P2Q5
Purpose :	Calculates the area and circumference of a circle
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)
#define PI 3.14159
// PI (ie ¦Ð) has a constant (fixed) value. 

void main()
{
	//variable declaration
	double area, circumference, radius;

	//input from the user
	printf("Enter the radius of the circle :"); // 
	scanf("%lf", &radius);
	
		
	 //process the calculation
	area = PI * radius * radius; // calculate area of the circle
	circumference = 2 * PI * radius; //calculate circumference of the circle

	//outout of the calcualtion
	printf("Area = %.2f\n", area); //display area value
	printf("Circumference = %.2f\n", circumference); //display circumference value

	system("pause");
}