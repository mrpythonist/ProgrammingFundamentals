#include<stdio.h>
#include<stdlib.h>
#define SIZE 35
int searchInArray(int myArray[], int posArray[], int search_key);
void getOrdinal(int n, char OrdStr[]);
int main()
{
    int myArray[SIZE] = {2,5,6,2,4,8,4,5,2,2,5,6,8,6,5,4,2,6,8,2,3,2,5,6,2,3,6,5,2,3,65,5,2,2,6}, posArray[SIZE] = {}, search_key, i, n;
    char OrdStr[2];
    /*for(i=0;i<SIZE;i++)
    {
        myArray[i] = rand() % 100;
    }*/
    printf("[index] Values: \n");
    for(i=0;i<SIZE;i++)
    {
        printf("[%d]   %d \n",i+1,  myArray[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search_key);
    n = searchInArray(myArray, posArray, search_key);
    printf("Value found at position ");
    for(i=0;i<n;i++)
    {
        getOrdinal(posArray[i], OrdStr);
        printf("%d%s", posArray[i],OrdStr);
        if(i<n-2)
            printf(", ");
        if(i==n-2)
            printf(" and ");
        if(i==n-1)
            printf(".");
    }
    printf("\nTotal Matches: %d", n);
}
int searchInArray(int myArray[], int posArray[], int search_key)
{
    int i, j;
    for(i=0, j=0; i<SIZE; i++)
    {
        if(myArray[i] == search_key)
        {
            posArray[j] = i+1;
            j = j + 1;
        }
    }
    return j;
}
void getOrdinal(int n, char OrdStr[])
{
    if(n>20)
    {
        n = n % 10;
    }
    switch(n)
    {
        case 1: strcpy(OrdStr, "st"); break;
        case 2: strcpy(OrdStr, "nd"); break;
        case 3: strcpy(OrdStr, "rd"); break;
        default:
            strcpy(OrdStr, "th");
    }
}
