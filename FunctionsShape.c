// making a shape using functions

#include<stdio.h>

// Declaring Functions
void upwardTriangle();
void downwardTriangle();
void rectangle();
int main()
{
    // Calling Functions
    upwardTriangle();
    rectangle();
    printf("\n\n\n");
    rectangle();
    downwardTriangle();
}

// Defining Functions
void upwardTriangle()
{
    printf("   *   \n  ***  \n ***** \n*******\n");
}
void downwardTriangle()
{
    printf("*******\n ***** \n  *** \n   *   \n");
}
void rectangle()
{
    printf("-------\n-------\n-------\n-------\n");
}
