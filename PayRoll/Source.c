#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int employNum, hours, payRate, sales, wages;
	int bonus, overTime=0, higherPay;
	int totalWages=0, totalOvertime=0, mostHours=0, bestEmployee;

	//Ask User for first Number
	printf("Please enter employee number:\t\t\t");
	scanf("%d", &employNum);

	//Until -1 is entered
	while (employNum > 0)
	{
		//Ask for Employee Number of hours
		printf("Please enter number of hours worked:\t\t");
		scanf("%d", &hours);

		//Set Most Hours
		if (hours > mostHours)
		{
			bestEmployee = employNum;
			mostHours = hours;
		}

		//Ask for Employee rate of pay
		printf("Please enter employee payrate:\t\t\t");
		scanf("%d", &payRate);

		//Ask for Employee Value of Sales
		printf("Please enter employee value of sales per week:\t");
		scanf("%d", &sales);

		//Work out payrates on all hours
		if (hours <= 39)
		{
			wages = hours*payRate;
		}
		else if (39 < hours && hours <=50)
		{
			overTime = hours - 39;
			higherPay = (payRate * 1.5);

			wages = (39*payRate)+(overTime * higherPay);
		}
		else if(hours > 50)
		{
			overTime = hours - 50;
			higherPay = (payRate * 1.5);
			bonus = (payRate * 2);

			wages = (39 * payRate) + (11 * higherPay) + (overTime * bonus);
			overTime += 11;
		}

		//Update Total
		totalWages += wages;
		totalOvertime += overTime;

		//Display to screen
		printf("\nEmployee Number:\t%d", employNum);
		printf("\nTotal Weekly Salary:\t%d",wages);

		//if it is not -1 it will start again
		//Ask for Employee Number
		printf("\n\n\nPlease enter employee number:\t\t\t");
		scanf("%d", &employNum);
	}

	//Display Info
	printf("\n\n\nTotal Compay Wages is:\t\t\t%d", totalWages);
	printf("\nTotal Overtime:\t\t\t\t%d", totalOvertime);
	printf("\nEmployeee that worked most hours:\t%d\n\n\n", bestEmployee);
}