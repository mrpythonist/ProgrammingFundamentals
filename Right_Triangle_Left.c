// Program to print right triangle

#include<stdio.h>
int main()
{
    // Declaring Variables
    int i, j;

    // For Loop for rows
    for(i=1;i<=5;i++)
    {

        // For loop for columns
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");

    }

}
