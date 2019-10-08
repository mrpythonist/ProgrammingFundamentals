// Write a C program that accepts three integers and find the maximum of three.
/*
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

#include<stdio.h>
int main()
{
    int n1, n2, n3, greater;
    printf("Input First number: ");
    scanf("%d", &n1);
    printf("Input Second number: ");
    scanf("%d", &n2);
    printf("Input Three number: ");
    scanf("%d", &n3);
    greater = n1;
    if(n2>n1 && n2>n3)
        printf("Maximum value of three integers is %d", n2);
    else if(n3>n1 && n3>n2)
        printf("Maximum value of three integers is %d", n3);
    else
        printf("Maximum value of three integers is %d", n1);
    return 0;
}
