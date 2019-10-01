// C-Program to calculate area and Perimeter of the triangle.

#include<stdio.h>
int main()
{
    int a, b, c, area, perim;
    printf("Enter base value: ");
    scanf("%d", &a);
    printf("Enter height value: ");
    scanf("%d", &b);
    printf("Enter hypotenuse value: ");
    scanf("%d", &c);
    area = 0.5*a*b;
    perim = a+b+c;
    printf("Area is %d and Perimeter is %d.", area, perim);



}
