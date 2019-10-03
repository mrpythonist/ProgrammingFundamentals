/*
Write a program that inputs choice from the user and perform the given operation:
1 - Counting Odd numbers
2 - Calculating Power (Without using math.h file)
3 - Celsius to Fahrenheit Converter
4 - Exit
*/

#include<stdio.h>
int main()
{

    // Declaring Variables
    int choice, odd=0, num, i, j, base, power, res;
    float  cel, fah, cal;

    // Running Loop again and again
    while(1)
    {

        // Inputs from the user
        printf("\n\nPress 1 to counting odd numbers.\nPress 2 for power of number.\nPress 3 for Celsius to Fahrenheit converter. \nPress 4 to exit.\n");
        scanf("%d", &choice);
        
        // If choice is 1 then asks for 10 inputs and count the Odd numbers
        if(choice==1)
        {
            for(i=1; i<=10; i++)
            {
                printf("\nEnter a number: ");
                scanf("%d", &num);
                if(num%2==1)
                {
                    odd = odd+1;
                }
            }
            printf("\nYou entered %d odd numbers.", odd);
        }
        
        // If choice is 2 then asks for base and power and displays the result
        else if(choice==2)
        {
            res = 1;
            printf("\nEnter base: ");
            scanf("%d", &base);
            printf("Enter power: ");
            scanf("%d", &power);
            for(j=1; j<=power; j++)
            {
                res = res*base;
            }
            printf("\nResult is: %d", res);
        }
        
        // If choice is 3 then asks for temperature in Celsius and convert it into Fahrenheit
        else if(choice==3)
        {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &cel);
            cal = cel*(9.0/5.0);
            fah = cal + 32;

            printf("Temperature in Fahrenheit is: %0.1f", fah);
        }
        
        // If choice is 4 then loop ends
        else if(choice==4)
        {
            break;
        }
        
        // If  choice is other than that then displays message and asks to enter again
        else
        {
            printf("Wrong Input! Try Again.");
        }
    }
    return 0;
}
