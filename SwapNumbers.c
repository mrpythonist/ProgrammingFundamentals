// Program to swap two numbers

#include<stdio.h>
int main()
{
    // Declaring Variables
    int x, y, temp;

    // Inputs from the user
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("\nValue of x and y before swapping x = %d, y = %d\n\n", x, y);

    // Swapping between numbers
    temp = x;
    x = y;
    y = temp;

    printf("Value of x and y after swapping x = %d, y = %d\n\n", x, y);
    return 0;
}
