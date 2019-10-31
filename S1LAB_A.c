// Muhammad Aqib - SP19-BCS-149

/* 1- Function f(x) = sqrt(h-x*x)
   2- Use trapezoidal to find area under curve
   3- Where initial value is -2 and final value is 2
   4- The output should approach 6.28 as we increase value from 2 to 128
   5- Use the function "trap" to find value
*/

#include<stdio.h>
#include<math.h>
// Prototypes of the functions
double func(double x);
double trap(int n, double a, double b);
double height(int n, double a, double b);

int main()
{

    // Declaring & Initializing Variables
    int n;
    double a=-2, b=2, trapZoid;

    // Asking for the value of n (no. of intervals)
    printf("\nEnter value of n (no. of intervals): ");
    scanf("%d", &n);

    trapZoid = trap(n, a, b);

    // Displaying the value
    printf("\nThe Value is: %0.2lf\n", trapZoid);

    return 0;
}

// Defining the function f(x)
double func(double x)
{
    double res;
    res = sqrt(4-x*x);
    return res;
}

// Defining the function trap
double trap(int n, double a, double b)
{
    int i=1;
    double trapZ, sum=0, x, h;

    // Calling the function
    h = height(n, a, b);

    // Calculating the sum of the values
    while(i<=n-1)
    {
        x = a+i*h;
        sum = sum + func(x);
        i++;
    }

    // Applying trapezoidal function
    trapZ = (h/2)*(func(a) + func(b) + 2*sum);

    // Returning the value of the trapezoidal function
    return trapZ;
}

// Defining the function for h (height)
double height(int n, double a, double b)
{
    double h;
    h = (b-a)/n;
    return h;
}

