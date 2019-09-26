// Program that will take three sides of triangle and display whether the triangle is right angeled or not.
// Note if the input is less than or equal to zero than it will not compute and display error message.

#include<stdio.h>
#include<math.h>
int main()
{
    // Initialization
    float a, b, c, n1, n2, n3;

    // Taking Three sides as input
    printf("First Side of triangle: ");
    scanf("%f", &a);
    printf("Second Side of triangle: ");
    scanf("%f", &b);
    printf("Third Side of triangle: ");
    scanf("%f", &c);

    // Applying Pythagoras Theorem to find whether triangle is right angeled or not
    n1 = sqrt(b*b+c*c);
    n2 = sqrt(a*a+c*c);
    n3 = sqrt(a*a+b*b);

    // Applying conditions
    if(a<=0 || b<=0 || c<=0)
        printf("\nWrong Inputs! Sides Can't be less than or equal to zero\n");
    else if(n1==a)
        printf("\nRight Angeled Triangle.\n");
    else if(n2==b)
        printf("\nRight Angeled Triangle.\n");
    else if(n3==c)
        printf("\nRight Angeled Triangle.\n");
    else
        printf("\nNot a right Angeled Triangle.\n");
    return 0;
}
