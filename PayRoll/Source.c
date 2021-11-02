#include <stdio.h>

//Main
void main()
{
	//Declare variables
	float employNum, hours, payRate, sales, wages;
	float bonus, overTime = 0, higherPay;
	float totalWages = 0, totalOvertime = 0, mostHours = 0, bestEmployee;

	//Ask User for first employee Number
	printf("Please enter employee number:\t\t\t");
	scanf("%f", &employNum);

	//Until -1 is entered 
	while (employNum > 0)
	{
		//Ask for Employee Number of hours
		printf("Please enter number of hours worked:\t\t");
		scanf("%f", &hours);

		//Set Most Hours
		if (hours > mostHours)
		{
			//Set details for most hours worked
			bestEmployee = employNum;
			mostHours = hours;
		}

		//Ask for Employee rate of pay
		printf("Please enter employee payrate:\t\t\t");
		scanf("%f", &payRate);

		//Ask for Employee Value of Sales
		printf("Please enter employee value of sales per week:\t");
		scanf("%f", &sales);

		//39 or under
		if (hours <= 39)
		{
			//If hours 39 or less its paid by pay rate
			wages = hours*payRate;
		}

		//Over 39 hours and under 50
		else if (39 < hours && hours <=50)
		{
			//If hours 39 or less its paid by pay rate
			overTime = hours - 39;

			//Anything over 39 and under 50 is time and a half
			higherPay = (payRate * 1.5);

			//Work out employees pay
			wages = (39*payRate)+(overTime * higherPay);
		}
		
		//Over 50 hours
		else if(hours > 50)
		{
			//Find over time
			overTime = hours - 50;

			//Find time and a half
			higherPay = (payRate * 1.5);

			//Find double pay
			bonus = (payRate * 2);

			//Calculate wages
			wages = (39 * payRate) + (11 * higherPay) + (overTime * bonus);

			//Update overtime to use at end for all over 39
			overTime += 11;
		}

		//Update Total
		totalWages += wages;
		totalOvertime += overTime;

		//Display to screen
		printf("\nEmployee Number:\t%.0f", employNum);
		printf("\nTotal Weekly Salary:\t%.2f",wages);

		//if it is not -1 it will start again
		//Ask for Employee Number
		printf("\n\n\nPlease enter employee number:\t\t\t");
		scanf("%f", &employNum);
	}

	//Display Info
	if (mostHours > 0)
	{
		printf("\n\n\nTotal Compay Wages is:\t\t\t%.2f", totalWages);
		printf("\nTotal Overtime:\t\t\t\t%.2f Hours", totalOvertime);
		printf("\nEmployeee that worked most hours:\t%.0f\n\n\n", bestEmployee);
	}

	//If -1 entered as first number
	else
	{
		printf("\n\n******************************************************************************");
		printf("\n\nERROR: No details entered!!!!!");
		printf("\n\n******************************************************************************\n\n");
	}
}