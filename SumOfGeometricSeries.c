// Program to display the sum of geometric series

#include<stdio.h>
#include<math.h>
int main()
{
    // Declaration of variables
    int a, r, n, power, n1, n2, n3, n4, n5, n6;
    
    // Input values from the user
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of r: ");
    scanf("%d", &r);
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    // Applying formulas 
    power = pow(r, n);
    n1 = r-1;
    n2 = a*power - a;
    n3 = 1-r;
    n4 = a - a*power;
    n5 = n2/n1;
    n6 = n4/n3;
    
    // Checking if the value of r is greater than 1 than apply following formula.
    if (r>1)
    {
        printf("Sum of geometric series is: %d", n5);
    }
    
    // Checking if the value of r is smaller than 1 than apply following formula.
    else if(r<1)
    {
        printf("Sum of geometric series is: %d", n6);
    }
    
    // Checking if the value of r is equal to 1 than display a message.
    else if(r==1)
    {
        printf("Value of r cannot be 1.");
    }
    
    // If it does not met any condition then display the message.
    else
    {
        printf("Wrong Input!");
    }
    return 0;
}
