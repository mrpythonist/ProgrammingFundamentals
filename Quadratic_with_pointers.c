#include<stdio.h>
void quad(int, int, int, double*, double*);
int main()
{
    int a, b, c;
    double resp1, resp2;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    quad(a, b, c, &resp1, &resp2);
    printf("Value with +ve is: %0.2lf\n", resp1);
    printf("Value with -ve is: %0.2lf", resp2);
    return 0;
}
void quad(int a, int b, int c, double *resp1, double *resp2)
{
    double n;
    n = sqrt(b*b - 4*a*c);
    *resp1 = (-b+n)/(2*a);
    *resp2 = (-b-n)/(2*a);
}
