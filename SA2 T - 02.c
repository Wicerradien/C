//
//  SA2 T - 02
//  SA2 T - 02
//
//  Created by Nafiur Rahman Dhrubo on 21/05/21.
//

#include <stdio.h>

void shiftArr1Pos(int *arr1, int arrSize)
{
    int i, t;
    t = arr1[0];
    for(i = 0; i < arrSize-1; i++)
    {
        arr1[i] = arr1[i + 1];
    }
    arr1[i] = t;
}

void arr1Rotate(int *arr1, int arrSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);
    }
    return;
}

int main()
{
    int arr1[100] = {0};
    int n, k;

    printf("Enter Array Size : ");
    scanf("%d", &n);


    for (int j = 0; j < n; ++j)
    {
        printf("Enter Array Elements [%d] : ", j + 1);
        scanf("%d", &arr1[j]);
    }

    printf("\n\n");

    printf("The Given Array Is :  ");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n\n");

    printf("Enter Position : ");
    scanf("%d", &k);

    printf("\nFrom %d Position The Values Of The Array Are :  ", k);
    for(int i = k; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    printf("Before %d Position The Values Of The Array Are :  ", k);
    for(int i = 0; i < k; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");

    arr1Rotate(arr1, n, k);

    printf("\nAfter Rotating From %d Position The Array Is : ", k);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n ");
    return 0;
}