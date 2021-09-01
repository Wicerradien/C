#include<stdio.h>

int main ()
{
    int array[10], element, c, n, pos;

    int found = 0;

    printf("Enter Number Of Elements In Array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);

    for(c = 0; c < n; c++)
        {
            scanf("%d", &array[c]);
        }

    printf("\n\nThe Array Elements Are : ");

    for(c = 0; c < n; c++)
        {
            printf("%d ", array[c]);
        }

    printf("\n\nEnter The Element To Be Deleted : ");
    scanf("%d", &element);

    for(c = 0; c < n; c++)
    {
        if(array[c] == element)
        {
            found = 1;
            pos = c;
            break;
        }
    }
    if(found == 1)
    {
        for(c = pos; c < n - 1; c++)
            array[c] = array[c+1];
    }
    else
        printf("\n\nElement %d Is Not In The Array\n\n", element);

    printf("\n\nResultant Array Is : \n");
    for(c = 0; c < n - 1; c++)
        printf("%d  ", array[c]);

    return 0;
}
