#include <stdio.h>

int main ()
{
    int n, i;
    float a[100], sum = 0.0, avg = 0.0;

    printf("Enter the numbers of elements \(1 - 100\) : ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
        {
            printf("Enter element %d : ", i + 1);
            scanf("%f", &a[i]);
            sum += a[i];
        }

     avg = sum / n;

     printf("\nThe elements greater than average are : \n");

    for (i = 0; i < n; ++i)
        {
            if (a[i] > avg)
                printf("%f\n", a[i]);
        }

    printf("\nAverage = %f\n", avg);

    return 0;
}
