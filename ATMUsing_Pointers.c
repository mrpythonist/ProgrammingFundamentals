#include<stdio.h>
void atm(int n, int *n1, int *n2, int *n3);
int main()
{
    int n, n1=0, n2=0, n3=0;
    printf("Enter your desired amount (Multiple of 10): ");
    scanf("%d", &n);
    atm(n, &n1, &n2, &n3);
    printf("50's = %d\t20's = %d\t10's = %d", n1, n2, n3);
    return 0;
}
void atm(int n, int *n1, int *n2, int *n3)
{
    while(n)
    {
        if(n>=50)
        {
            *n1 = *n1 + 1;
            n = n - 50;
        }
        else if(n>=20)
        {
            *n2 = *n2 + 1;
            n = n - 20;
        }
        else if(n>=10)
        {
            *n3 = *n3 + 1;
            n = n - 10;
        }
    }
}
