/*
Project Filename:: P2Q6
Purpose:	:Book loan system
*/


#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable: 4996)

void main(void)
{
	//variable declaration 
	const int MAXIMUM_LOAN_PERIOD = 14;
	const float FINE_RATE = 0.20;
	int numbersOfBooks;
	int daysOfBorrowing;
	double amountFined;
	int daysOverdue;


	//interface
	printf("-------------------- \n");
	printf("BOOK LOAN SYSTEM \n");
	printf("-------------------- \n");

	//input from user
	printf("Enter the number of the book:");
		scanf("%d", &numbersOfBooks);
	printf("Enter the days of the loan:");
		scanf("%d", &daysOfBorrowing);

	//process
		daysOverdue = daysOfBorrowing - MAXIMUM_LOAN_PERIOD;
		amountFined= FINE_RATE * daysOverdue * numbersOfBooks;
		
	//output
		printf("-------------------------------------------------------\n");
		printf("Days Overdue: %i\n", daysOverdue);
		printf("Fine: %.2f\n", amountFined);


	system("pause");

}
