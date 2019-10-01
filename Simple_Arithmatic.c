// Program to perform the simple arithmetic operations (addition, subtraction, multiplication, division, remainder).

#include<stdio.h>
int main()
{
    int a, b, add, sub, mul, div, mod;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sub = a-b;
    add = a+b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("Addition is %d\n", add);
    printf("Subtraction is %d\n", sub);
    printf("Multiplication is %d\n", mul);
    printf("Division is %d\n", div);
    printf("Modulus is %d\n", mod);
}
