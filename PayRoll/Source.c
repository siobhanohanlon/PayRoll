#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int employNum, hours, payRate, sales, wages;
	int bonus, overTime, higherPay;
	int totalWages, totalOvertime, mostHours = 0, bestEmployee;

	//Ask User for first Number
	printf("Please enter employee number:\t");
	scanf("%d", &employNum);

	//Until -1 is entered
	while (employNum > 0)
	{
		//Ask for Employee Number of hours
		printf("Please enter number of hours worked:\t");
		scanf("%d", &hours);

		//Set Most Hours
		if (hours> mostHours)
		{
			bestEmployee = employNum;
		}

		//Ask for Employee rate of pay
		printf("Please enter employee payrate:\t");
		scanf("%d", &payRate);

		//Ask for Employee Value of Sales
		printf("Please enter employee value of sales per week:\t");
		scanf("%d", &sales);

		//Work out payrates on all hours
		if (hours <= 39)
		{
			wages = hours*payRate;
		}
		else if (39 < hours <=50)
		{
			overTime = hours - 39;
			higherPay = (payRate * 1.5);

			wages = (39*payRate)+(overTime * higherPay);
		}
		else
		{
			overTime = hours - 50;
			higherPay = (payRate * 1.5);
			bonus = (payRate * 2);

			wages = (39 * payRate) + (11 * higherPay) + (overTime * bonus);
		}

		//Display to screen
		printf("Employee Number:\t%d", employNum);
		printf("Total Weekly Salary:\t%d",wages);

		//if it is not -1 it will start again
		//Ask for Employee Number
		printf("Please enter employee number:\t");
		scanf("%d", &employNum);
	}

	//Display Info
}