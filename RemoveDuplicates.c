#include<stdio.h>
#define SIZE 10
int removeDuplicates(int inArr[], int outArr[]);
int main()
{
    int size, i;
    int inArr[SIZE] = {2,3,2,2,5, 5, 6, 7, 2, 3};
    int outArr[SIZE] = {};
    size = removeDuplicates(inArr, outArr);
    printf("Input Array: ");
    for(i=0;i<SIZE;i++)
        printf("%d ", inArr[i]);
    printf("\nOutput Array: ");
    for(i=0;i<size;i++)
        printf("%d ", outArr[i]);
    printf("\nSize: %d", size);
}
int removeDuplicates(int inArr[], int outArr[])
{
    int i, j, k, f;
    for(i=0, k=0;i<SIZE;i++)
    {
        f = 0;
        for(j=0;j<SIZE;j++)
        {
            if(inArr[i]==outArr[j])
                f = 1;
        }
        if(f==0)
        {
            outArr[k] = inArr[i];
            k++;
        }
    }
    return k;
}
