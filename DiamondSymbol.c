// Program to print diamond symbol

#include<stdio.h>
int main()
{
    // Declaring Variables
    int i, j, k, space=2;
    
    // For Loop for rows
    for(i=1; i<=5; i++)
    {
       // Condition for or printing odd number of stars
       if(i%2==1)
       {
           // Loop for adding spaces
           for(j=1; j<=space; j++)
           {
               printf(" ");
           }
           
           // Loop for printing stars
           for(k=1; k<=i; k++)
           {
               printf("*");
           }
           printf("\n");
           space--;
       }
    }
    space = 1;
    
    // For Loop for rows
    for(i=3; i>=1; i--)
    {
       if(i%2==1)
       {
           for(j=1; j<=space; j++)
           {
               printf(" ");
           }
           for(k=1; k<=i; k++)
           {
               printf("*");
           }
           printf("\n");
           space++;
       }
    }
}
