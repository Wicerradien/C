#include <stdio.h>

int main ()
{
    int arry1[100];
    int i, size, num, pos;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(i = 0; i < size; i++)
        {
            scanf("%d", &arry1[i]);
        }

    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    if(pos > size + 1 || pos <= 0)
        {
            printf("Invalid position! Enter position between 1 to %d", size);
        }
    else
        {
            for(i = size; i >= pos; i--)
            {
            arry1[i] = arry1[i - 1];
            }

    arry1[pos - 1] = num;
    size++;

    printf("Array elements after insertion : ");
    for(i = 0; i < size; i++)
        {
            printf("%d\n", arry1[i]);
        }
        }

    return 0;
}
