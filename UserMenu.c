// Muhammad Aqib

// Program to input two numbers and apply the following function on these numbers.

#include<stdio.h>

// Function prototype
int validateInput(int x);
int fact(int n);

int main()
{
    // Declaring Variables
    int n, r, c;
    double nCr, nPr;

    // Inputs from the user
    printf("Enter a number (n): ");
    scanf("%d", &n);

    // Validating Input
    if(n<=0)
        n = validateInput(n);    // Input Validation function
    printf("Enter a number (r): ");
    scanf("%d", &r);
    if(r<=0)
        r = validateInput(r);    // Input Validation function

    // Applying loop for the user menu
    do
    {
        // User Menu
        printf("Choose from the menu:\nPress 1 for multiplying numbers\n");
        printf("Press 2 for finding nCr\n");
        printf("Press 3 for finding nPr\n");
        printf("Press -1 for Exit\n");
        printf("Input: ");
        scanf("%d", &c);  // Input Choice from the user
        if(c==1) // Multiplication part
        {
            printf("Multiplication of %d and %d is %d\n\n", n, r, n*r);
        }
        else if(c==2) // Combination part (nCr)
        {
            if(n<=r) // if n is less than or equal to r then combination can't be applied
            {
                printf("Can't be applied on these numbers. (n should be greater than r).\n");
            }
            else
            {
                nCr = fact(n)/(fact(r)*fact(n-r)); // Formula for combination nCr = n!/r!(n-r)!
                printf("nCr is: %0.2lf\n\n", nCr);
            }
        }
        else if(c==3) // Permutation part (nPr)
        {
            if(n<=r) // if n is less than or equal to r then Permutation can't be applied
            {
                printf("Can't be applied on these numbers. (n should be greater than r).\n");
            }
            else
            {
                nPr = fact(n)/fact(n-r);  // Formula for permutation nPr = n!/(n-r)!
                printf("nPr is: %0.2lf\n\n", nPr);
            }

        }
    }
    while(c!=-1); // loop will continue until user presses -1

}

// Validation function definition
int validateInput(int x)
{
    do
    {
        printf("\nEnter a number again: ");
        scanf("%d", &x);
    }
    while(x<=0);
    return x;
}

// Factorial function definition
int fact(int n)
{
    int i, f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
