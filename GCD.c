// Muhammad Aqib

// Program to find Greatest Common Divisor between two numbers
#include<stdio.h>
#include<math.h>
int GCD(int x, int y);  // Function prototype
int main()
{
    int n, m, gcd;  // Declaring Variables

    // Inputs from the user
    printf("Enter first number: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &m);
    n = abs(n); // Returning absolute value
    m = abs(m);
    gcd = GCD(n, m); // Applying function and returning the Greatest Common Divisor.
    printf("Greatest Common Divisor is: %d", gcd);
    return 0;
}

// GCD function definition
int GCD(int x, int y)
{
    int r; // Remainder
    while(r!=0)
    {
        r = x%y;
        x=y;
        y = r;
    }
    return x;
}
