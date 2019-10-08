// Write a C program to print the following characters in a reverse way.
/*
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/
#include<stdio.h>
int main()
{
    char ch1 = 'X';
    char ch2 = 'M';
    char ch3 = 'L';
    printf("The reverse of %c%c%c is %c%c%c", ch1, ch2, ch3, ch3, ch2, ch1);
    return 0;
}
