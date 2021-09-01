#include <stdio.h>

void printArray (int *arr, int n)
{
    printf("\tIndex\t    Address\tValue");

    for ( int i = 0 ; i < n ; i++ )
    {
        printf("\n\t%d\t%p\t%d\n", i, arr, *arr);
        arr++;
    }
}

int main ()
{
    int *p, n;
    int val[100];
    p = &val[0];

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Enter Elements %d : ", i + 1);
        scanf("%d", &val[i]);
    }

    printArray(p, n);
}