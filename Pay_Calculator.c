#include<stdio.h>
#include<conio.h>

int main()
{
	
	// variables declaration
	int exp, age;
	char grade;
	float basic_salary, per_increment, rp, hra, ssb, ara, gp, it, gpf, donation, totalDeduct, netPay, ai;
	
	// user input module
	printf("Enter your scale: ");
	scanf("%c", &grade);
	printf("Enter your Age: ");
	scanf("%d", &age);
	printf("Experience in years: ");
	scanf("%d", &exp);
	
	// grade checking module
	if (grade == 'w' || grade == 'W')
	{
		basic_salary = 10000;
		per_increment = 700;	
	}
	else if (grade == 'x' || grade == 'X')
	{
		basic_salary = 12900;
		per_increment = 910;
	}
	else if (grade == 'y' || grade == 'Y')
	{
		basic_salary = 21700;
		per_increment = 1500;
	}
	else if (grade == 'z' || grade == 'Z')
	{
		basic_salary = 32600;
		per_increment = 2800;
	}
	else
	{
		printf("Wrong Input!");
	}
	
	// Running Pay Calculation
	rp = basic_salary + exp*per_increment;
	
	// Basic Pay Output Module
	printf("\n____________________________________\n");
	printf("Basic Pay\n");
	printf("____________\n");
	printf("Basic Salary: \t\t\t %0.2f \n", basic_salary);
	printf("No of Increments: \t\t %d \n", exp);
	printf("Running Pay: \t\t\t %0.2f \n\n", rp);
	
	
	// Allowances Calculations
	hra = rp*(45.0/100.0);
	ssb = basic_salary*(30.0/100.0);
	if(grade == 'w' || grade == 'W' && age > 40)
		ara = 3000;
	else
		ara = 1500;
	
	// Gross Pay Calculation
	gp = rp + hra + ssb + ara;
	
	// Allownaces Output Module
	printf("Allowances\n");
	printf("____________\n");
	printf("House Rent Allowances: \t\t %0.2f\n", hra);
	printf("Social Security Benefits: \t %0.2f\n", ssb);
	printf("Adhoc Relief Allowances: \t %0.2f\n", ara);
	printf("Gross Pay: \t\t\t %0.2f\n\n", gp);
	
	// Donation calculation
	donation = (int)gp%100;
	gp -= donation;
	
	// Annual Income Calculation
	ai = gp * 12;
	
	// Calculating Income Tax based on Annual Income
	if(ai <= 400000)
		it = ai*(0.0/100.0);
	else if(ai > 400000 && ai <= 650000)
		it = ai*(2.5/100.0);
	else if(ai > 650000 && ai <= 1000000)
		it = ai*(4.75/100.0);
	else if(ai > 1000000 && ai <= 1500000)
		it = ai*(7.0/100.0);
	else if(ai > 1500000)
		it = ai*(11.5/100.0);
	
	it /= 12;
	
	// General Provident Fund
	gpf = gp * (10.0/100.0);
	
	// Deductions and Net Pay
	totalDeduct = it + gpf + donation;
	netPay = gp - totalDeduct;
	
	// Deductions and Net Pay Output Module
	printf("Deductions\n");
	printf("____________\n");
	printf("Income Tax (at 7.00): \t\t %0.2f\n", it);
	printf("General Provident Fund: \t %0.2f\n", gpf);
	printf("Donations: \t\t\t %0.2f\n\n", donation);
	printf("Total Deductions: \t\t %0.2f\n\n", totalDeduct);
	printf("Net Pay: \t\t\t %0.2f\n", netPay);
	
	
	return 0;
}
