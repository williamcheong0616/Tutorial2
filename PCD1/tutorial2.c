/*
Program Filename : P2Q3
Purpose			 : CONVERT HEIGHT FROM CENTIMETERS TO INCHES
*/
#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)

void main(void)
{
	//Variable declaration
	char firstName[11], lastName[21];
	int	 heightCM;
	double heightIN;

	//input

	printf("Enter your first name      :");
	gets(&firstName);

	printf("Enter your last name       :");
	gets(&lastName);

	printf("Enter your height in \"cm\" : ");
	scanf("%d", &heightCM);

	//process
	heightIN = heightCM / 2.54;

	//Output
	printf("\n %s %s \n", firstName, lastName);
	printf("your height is \t %f inches.\n", heightIN);

	system("pause");

}