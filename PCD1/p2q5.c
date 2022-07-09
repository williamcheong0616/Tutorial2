/*
Prorame Filename: P2Q5
Purpose :	Calculates the area and circumference of a circle
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)
#define PI 3.14159
// PI (ie ¦Ð) has a constant (fixed) value. 

void main(void)
{
	//variable declaration
	double area;	// to store the values
	int circumference; // to store the values
	int radius;	// to store the values

	//input from the user
	printf("Enter the radius of the circle :"); // 
	scanf("%if", &radius);

		PI = 3.141593;
		area = PI * radius * radius; // calculate area of the circle
		circumference = 2 * PI * radius; //calculate circumference of the circle

	 //output of the calculation

	printf("Area = %.2f\n", area); //display area value
	printf("Circumference = %.2f\n", circumference); //display circumference value

	system("pause");
}