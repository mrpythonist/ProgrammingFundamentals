/*Write a program that calculates mileage reimbursement for a salesperson at
a rate of $.35 per mile.*/
#include<stdio.h>
int main()
{
    // Declaring Variables
    float start_reading, end_reading, total_miles, total_amount, rate;

    // Rate of per mile
    rate = 0.35;
    printf("\t\t----- MILEAGE REIMBURSEMENT CALCULATOR -----\n\n");

    // Asking for user inputs
    printf("Enter beginning odometer reading ? ");
    scanf("%f", &start_reading);
    printf("Enter ending odometer reading ? ");
    scanf("%f", &end_reading);

    // Computing total miles
    total_miles = end_reading - start_reading;

    // Computing total miles
    total_amount = total_miles*rate;

    // Displaying Results
    printf("You traveled %0.1f miles. At $%0.2f per mile, \nYour reimbursement is $%0.2f", total_miles, rate, total_amount);
}
