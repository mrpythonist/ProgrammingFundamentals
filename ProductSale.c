// This program will take three products as input and will ask for quantities and discount on each product and display total amount
// Note it will take discount as (%) and if total amount is between 5000 and 6000 then it will add 5% discount to total amount.

#include <stdio.h>
int main() {
    // Initialization
    float a, b, c, qa, qb, qc, da, db, dc, t_amt_a, t_amt_b, t_amt_c, t_amt;

    // Input items from the user
    printf("Enter prices of three items: ");
    scanf("%f%f%f", &a, &b, &c);

    // Input quantities of each item from the user
    printf("Enter quantities of each item: ");
    scanf("%f%f%f", &qa, &qb, &qc);

    // Input discount on each item from the user
    printf("Enter discount on each item: ");
    scanf("%f%f%f", &da, &db, &dc);

    // Applying formulas
    t_amt_a = a*qa;
    t_amt_b = b*qb;
    t_amt_c = c*qc;

    // Calculating total amount
    t_amt = t_amt_a - t_amt_a*(da/100) + t_amt_b - t_amt_b*(db/100) + t_amt_c - t_amt_c*(dc/100);

    // Checking if the total amount is between 5000 and 6000
    if(t_amt > 5000 && t_amt < 6000)
        t_amt = t_amt - t_amt*(5.0/100.0);

    // Displaying Total amount
    printf("Total amount is %0.2f", t_amt);
    return 0;

}
