#include <stdio.h>

void main ()
{
    int arry1[100];
    int n, i, j, temp;

    printf("Input the size of array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++)
        {
            printf("element - %d : ", i);
	        scanf("%d", &arry1[i]);
	    }

    for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arry1[j] < arry1[i])
                {
                    temp = arry1[i];
                    arry1[i] = arry1[j];
                    arry1[j] = temp;
                }
            }
        }
    printf("\nElements of array in sorted ascending order :\n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arry1[i]);
    }
	        printf("\n\n");
}
