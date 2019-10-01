/* program that reads 5 marks of different subjects out of 100 from the
keyboard and determines and displays the sum and percentile of the marks. Then print grades
and credit points */
#include<stdio.h>
int main()
{
    int i, num, sum=0, avg;
    float gpa;
    for(i=1; i<=5; i++)
    {
        printf("Enter number of subject %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum/5;
    printf("Sum of subjects is: %d\n", sum);
    printf("Average of subjects is: %d\n", avg);
    if(avg>=90)
    {
        gpa = 4.0;
        printf("Grade is A and Credit Points %0.1f", gpa);
    }
    else if(avg>=85 && avg<=89)
    {
        gpa = 3.7;
        printf("Grade is A- and Credit Points %0.1f", gpa);
    }
    else if(avg>=80 && avg<=84)
    {
        gpa = 3.3;
        printf("Grade is B and Credit Points %0.1f", gpa);
    }
    else if(avg>=75 && avg<=79)
    {
        gpa = 3.0;
        printf("Grade is B- and Credit Points %0.1f", gpa);
    }
    else if(avg>=60 && avg<=64)
    {
        gpa = 2.7;
        printf("Grade is C and Credit Points %0.1f", gpa);
    }
    else if(avg>=65 && avg<=69)
    {
        gpa = 2.3;
        printf("Grade is C- and Credit Points %0.1f", gpa);
    }
    else if(avg>=50 && avg<=54)
    {
        gpa = 1.7;
        printf("Grade is D and Credit Points %0.1f", gpa);
    }
    else
    {
        gpa = 0.0;
        printf("Grade is F and Credit Points %0.1f", gpa);

    }

}
