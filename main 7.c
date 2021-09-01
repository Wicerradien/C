#include <stdio.h>

int main ()
{
    int arry1[100], i = 0, m, n;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array in ascending order:\n",n);

    for(i = 0; i < n; i++)
        {
            printf("element - %d : ", i);
            scanf("%d", &arry1[i]);
	    }

    printf("Position where to delete : ");
    scanf("%d", &m);

    i = 0;
    while(i != m - 1)
        {
            i++;
        }
    while(i < n)
        {
            arry1[i] = arry1[i + 1];
            i++;
        }
        n--;

    printf("\nThe new list is : ");

    for(i = 0; i < n; i++)
        {
            printf("  %d", arry1[i]);
		}
            printf("\n");
}
