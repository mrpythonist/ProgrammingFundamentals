// Program to find factorial of a given number

#include<stdio.h>
int main()
{
    // Declaring & Initializing variables
    int i, fact=1, n;

    // Asking a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if the number is positive
    if(n>0)
    {
        // Applying For loop
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        // Printing the factorial
        printf("Factorial is %d", fact);
    }

    // If the input number is not positive or other than a number
    else
    {
        printf("Wrong Number! Try Again.");
    }
}
