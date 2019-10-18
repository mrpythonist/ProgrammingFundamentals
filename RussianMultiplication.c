#include<stdio.h>
int main()
{
    int n, m, smaller, greater, total=0;
    printf("Enter first number: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &m);
    if(n<m)
    {
        smaller = n;
        greater = m;
    }
    else
    {
        smaller = m;
        greater = n;
    }
    if(smaller%2==1)
        total=total+greater;
    printf("%d\t%d\n", smaller, greater);
    while(smaller!=1)
    {
        greater = greater*2;
        smaller = smaller/2;
        if(smaller%2==1)
            total=total+greater;
        printf("%d\t%d\n", smaller, greater);
    }
    printf("Total is: %d", total);
    return 0;
}
