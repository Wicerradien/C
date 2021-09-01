#include <stdio.h>

int main ()
{
    int n, i, j, k;

    printf("Enter The Number : ");
    scanf("%d", &n);
    n += 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1, k = i; j <= i; j++, k--)
        {
            if (k % 2 == 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}

