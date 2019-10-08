// Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
/*
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/
#include<stdio.h>
#define PI 3.14
int main()
{
    int r=6;
    float perimeter, area;
    perimeter = 2*PI*r;
    area = PI*r*r;
    printf("Perimeter of the Circle = %f\n", perimeter);
    printf("Area of the Circle = %f\n", area);
    return 0;

}
