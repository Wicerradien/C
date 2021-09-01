#include <stdio.h>

void printFrequency (int n)
{
    int count = 0, x, a[100], i;
    for (int i = 0; i < n; i++)
    {
        printf ("Enter The Number %d : ", i + 1);
        scanf ("%d", &a[i]);
    }
    printf ("Enter The Number To Search : ");
    scanf ("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            count++;
    }

    printf ("\nNumber Occurred %d Times\n", count);
}

int main ()
{
    int n;
    printf ("Enter Array Size : ");
    scanf ("%d", &n);
    printFrequency (n);

    return 0;
}