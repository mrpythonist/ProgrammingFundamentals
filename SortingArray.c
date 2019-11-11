#include<stdio.h>
#include<stdlib.h>
#define sz 10
void sort(int arr[]);
int main()
{
    int arr[sz], i;
    for(i=0;i<sz;i++)
    {
        arr[i] = rand() % 100;
    }
    printf("Values before sort: \n");
    for(i=0;i<sz;i++)
    {
        printf("%5d", arr[i]);
    }
    sort(arr);
    printf("\nValues after sort: \n");
    for(i=0;i<sz;i++)
    {
        printf("%5d", arr[i]);
    }
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
