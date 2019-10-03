// A simple calculator that asks for two numbers and asks for the operator to perform on these two numbers

#include<stdio.h>
int main()
{

    // Declaring Variables
    float a, b;
    char op, option;

    // Caption
    printf("\t\t\t -- CALCULATOR ~ by Pythonist -- \n\n\n");

    // Applying loop for performing calculations again and again by the user
    while(1)
    {
    // Inputs from the user
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    // Asking for operator
    printf("Enter operator (+,/,*,-,%): ");
    scanf(" %c", &op);

    // Applying calculations according to the operator symbol
    switch(op)
    {
    case '+':
        printf("Sum of %0.1f and %0.1f is: %0.1f\n", a, b, a+b); break;
    case '*':
        printf("Product of %0.1f and %0.1f is: %0.1f\n", a, b, a*b); break;
    case '/':
        printf("Division of %0.1f and %0.1f is: %0.1f\n", a, b, a/b); break;
    case '-':
        printf("Subtraction of %0.1f and %0.1f is: %0.1f\n", a, b, a-b); break;
    default:
        printf("Wrong Input! Try again\n");
    }

    // Asking if the user want to perform calculation again
    printf("Want to calculate again (y/n)? ");
    scanf(" %c", &option);

    // If user wants to perform calculation
    if(option=='Y' || option == 'y')
        continue;

    // If user don't want to perform calculations
    else if(option=='n' || option == 'N')
        break;

    // If user enters wrong input.
    else
        printf("Wrong Input! Exiting....");
        break;

    }
}
