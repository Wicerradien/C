#include <stdio.h>

int main ()
{
    int arry1[5], i, k = 0;

    printf("Enter the numbers : \n");

    for(i = 0; i < 5; i++)
        {
            printf("Element - %d : ", i);
	        scanf("%d", &arry1[i]);
	    }

    for (i = 0; i < 5; i++)
        {
            k = 10 * k + arry1[i];
        }

    printf("\n\nCombined Int. Number Is : %d\n\n", k);
}
