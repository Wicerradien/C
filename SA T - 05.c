#include <stdio.h>

int main ()
{
    int i = 0;
    int sum = 0, a;

    for (i = 0; i > -1; i++)
        {
            printf ("Enter The Num To Sum : \n");
            scanf ("%d", &a);
            if (a == 0)
            {
                break;
            }
            sum += a;
            printf ("The Sum Is : %d\n\n", sum);
        }

    printf ("The Sum Is : %d\n\n", sum);

    return 0;
}
