#include<stdio.h>
void grade_gpa(int num, char *gradep, float *gpap);
int main()
{
    int n;
    char gradep;
    float gpap;
    printf("Enter numbers: ");
    scanf("%d", &n);
    grade_gpa(n, &gradep, &gpap);
    printf("Grade is %c and GPA is %0.1f", gradep, gpap);
    return 0;
}
void grade_gpa(int num, char *gradep, float *gpap)
{
    if(num>=90 && num<=100)
    {
        *gradep = 'A';
        *gpap = 4.0;
    }
    else if(num>=80 && num<=89)
    {
        *gradep = 'B';
        *gpap = 3.5;
    }
    else if(num>=70 && num<=79)
    {
        *gradep = 'C';
        *gpap = 3.0;
    }
    else if(num>=60 && num<=69)
    {
        *gradep = 'D';
        *gpap = 2.5;
    }
    else if(num>=50 && num<=59)
    {
        *gradep = 'E';
        *gpap = 2.0;
    }
    else if(num<50)
    {
        *gradep = 'F';
        *gpap = 0.0;
    }
    else
    {
        printf("Wrong Input!");
    }
}


