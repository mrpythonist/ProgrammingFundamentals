// Program to find a the magic number
// Magic Number: A 3-digits number that is equal to the sum of cube of 3 digits
// 1^3 + 5^3 + 3^3 = 153
#include<stdio.h>
int isMagicNumber(int x); // Function Prototype
int main()
{
    int n, res, total=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        res = isMagicNumber(n);  // Function Calling
        if(res==1) // If function returns 1 then add 1 to total
            total = total+1;
    }
    while(n!=-1); // Terminate the loop if user enters 1
    printf("Total Magic Numbers are %d", total-1); // Displaying total and subtracting 1 because if we take -1 then its cube is also -1
    return 0;
}
int isMagicNumber(int x) // Function Defining
{
    int i, j, sum=0; // Variables Declaration
    j = x; // Assigning value to a new variables because we will apply operation on this number
    while(x!=0) // Condition: Continue the loop until x becomes 0
    {
        i = x%10; // Taking Modulus of the number E.G; 153%10 == 3,  15%10 == 5, 1%10 == 1
        sum = sum + i*i*i; // adding cube of the number in sum
        x/=10; // Updating the variable by dividing it by 10 E.G; 153/10 == 15,  15/10 == 1
    }
    if(j==sum) // if original value is equal to the sum then return 1
        return 1;
    else
        return 0;
}
