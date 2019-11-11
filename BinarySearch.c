#include<stdio.h>
#include<stdlib.h>
#define sz 10
void sort(int arr[]);
void binarySearch(int arr[], int n);
int main()
{
    int arr[sz], i, n;
    for(i=0;i<sz;i++)
    {
        arr[i] = rand() % 100;
    }
    printf("Values before sort: \n");
    for(i=0;i<sz;i++)
    {
        printf("%d\t", arr[i]);
    }
    sort(arr);
    printf("\nValues after sort: \n");
    for(i=0;i<sz;i++)
    {
        printf("%d-%d\t",arr[i], i);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &n);
    binarySearch(arr, n);
}
void sort(int arr[])
{
    int i, j, temp;
    for(i=0;i<sz;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
void binarySearch(int arr[], int n)
{
    int lower = 0, upper = sz-1, middle, i;
    middle = (lower+upper)/2;
    while(lower<=upper)
    {
            if(n==arr[middle])
            {
                printf("Searched value %d is found at index %d", n, middle);
                break;
            }
            else if(arr[middle] < n)
                lower = middle + 1;
            else
                upper = middle - 1;
            middle = (lower+upper)/2;
    }
    if(lower > upper)
        printf("Value not found.");
}
