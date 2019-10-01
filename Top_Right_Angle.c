// Program to print a top right angle triangle.

#include<stdio.h>
int main()
{
    // Declaring Variables
    int i, j;
    
    // Applying FOR Loop for rows
    for(i=5;i>=1;i--)
    {
        
        // Applying FOR Loop for columns
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
