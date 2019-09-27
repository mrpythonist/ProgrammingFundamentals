// Program to check whether the input number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition for Even number
    if(num%2==0)
        printf("You entered an even number.");
    // Condition for Odd number
    else if(num%2==0)
        printf("You entered an odd number.");
    // If it does not meet any of the condition
    else
        printf("Wrong Input!");
    return 0;
}
