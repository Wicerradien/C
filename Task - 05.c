#include <stdio.h>
#define N 100

int search(int *a, int n, int key)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            count++;
    }
    return count;
}

int main ()
{
    int arr[N], n, i;
    int num, b;

    printf("Enter array size \(1 - 100\) : ");
    scanf("%d", &n);

    printf("Enter array elements : \n");
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the key : ");
    scanf("%d", &num);
    b = search(arr, n, num);

    printf("%d Occurrence : %d times\n", num, b);
    return 0;
}
