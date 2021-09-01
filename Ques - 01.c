#include <stdio.h>
int sum(int m, int n)
{
    int i, sum = 0;
    for(i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main ()
{
    int m, n, s = 0;

    printf("Enter lower limit : ");
    scanf("%d", &m);
    printf("Enter upper limit : ");
    scanf("%d", &n);
    s = sum(m, n);

    printf("Sum of natural numbers from %d to %d = %d", m, n, s);

    return 0;
}
