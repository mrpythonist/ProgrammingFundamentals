// Program to calculate the electricity bill.
#include<stdio.h>
int main()
{
    int units, bill, t_amount;
    printf("Enter number of units: ");
    scanf("%d", &units);
    if(units<=300)
        bill = units*3;
    else
        bill = units*3.5;
    t_amount = bill + bill*0.05;
    printf("Total Amount is: %d", t_amount);



}
