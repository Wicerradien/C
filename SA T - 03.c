#include <stdio.h>

double psum (double N)
{
    double sum = 0;
    int i;

    for (i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
                {
                    sum -= ((double)i / (i + 1));
                }
            else
                {
                    sum += ((double)i / (i + 1));
                }
        }

    return sum;
}

int main ()
{
    double n, sum = 0;
    printf ("Enter N : ");
    scanf ("%lf", &n);
    sum = psum(n);
    printf ("Sum : %lf\n", sum);
    return 0;
}
