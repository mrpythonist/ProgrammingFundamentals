// Program to swap two integer numbers without using third variable.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Value of first number is %d\n", a);
    printf("Value of second number is %d", b);

}
