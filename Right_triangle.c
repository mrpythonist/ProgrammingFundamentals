// Program to print right triangle

#include<stdio.h>
int main()
{
    // Declaring Variables
    int i, j, k, space = 4;

    // For Loop for rows
    for(i=1;i<=5;i++)
    {

        // For loop for spaces
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }

        // For loop for printing stars
        for(k=1; k<=i;k++)
            printf("*");
        printf("\n");
        space--;
    }

}
