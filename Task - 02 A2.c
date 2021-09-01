#include <stdio.h>
#define N 5

int main ()
{
    int a[N], even[N], odd[N], i, x = 0, y = 0;

    printf("Enter %d integer numbers\n", N);

    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 == 0)
            even[x++] = a[i];
        else
            odd[y++] = a[i];
    }

    printf("\nEven elements are : \n");
    for(i = 0; i < x; i++)
        printf("%d\n", even[i]);

    printf("\nOdd elements are : \n");
    for(i = 0; i < y; i++)
        printf("%d\n", odd[i]);

    printf("\n");

    return 0;
}
