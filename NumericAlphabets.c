// This program will take two digit or one digit number as input and display it as words.
// Note that this program will accept only from 0-99 numbers

#include<stdio.h>
int main()
{
    // Initialization
    int a, b=48, n1, n2;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    // Checking if number is greater than 19
    if(a>19)
    {
        // Separating two digits number into two different digits
    n1 = a%10;
    n2=a/10;
    // Applying switch statement for tenth digit
    switch(n2)
    {
        case 2: printf("Twenty "); break;
        case 3: printf("Thirty "); break;
        case 4: printf("Forty "); break;
        case 5: printf("Fifty "); break;
        case 6: printf("Sixty "); break;
        case 7: printf("Seventy "); break;
        case 8: printf("Eighty "); break;
        case 9: printf("Ninety "); break;
    }
    
    // Applying switch statement for right digit.
    switch(n1)
    {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
    }
    }
    // If number is less than or equal to 19
    else
    {
       switch(a)
    {
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        case 10: printf("Ten"); break;
        case 11: printf("Eleven"); break;
        case 12: printf("Twelve"); break;
        case 13: printf("Thirteen"); break;
        case 14: printf("Fourteen"); break;
        case 15: printf("Fifteen"); break;
        case 16: printf("Sixteen"); break;
        case 17: printf("Seventeen"); break;
        case 18: printf("Eighteen"); break;
        case 19: printf("Nineteen"); break;
    }
    }
    return 0;
}

