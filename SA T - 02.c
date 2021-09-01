#include <stdio.h>

int main()
{
    int x, y, a[100] = {0}, i;
    printf("Integers Between 100 & 200 Which Are Divisible By 8 In Descending Order : ");
    x = 100;
    i = 0;
    while (x <= 200)
        {
            if (x % 8 == 0)
            {
                a[i] = x;
            }


            x = x + 1;
            i = i + 1;
        }

    printf("%\n\n");

    y = 100;
    while (y >= 0)
    {
        if (a[y] != 0)
            {
                printf("%d ", a[y]);
            }
            y--;

    }
    printf("%\n\n");

    return 0;
}
