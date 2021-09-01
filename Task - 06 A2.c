#include <stdio.h>

int search(char *a, int n, char key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
             return 1;
        }
    }

return 0;

 }

int main ()
{
    char a[500], b;
    int n, i;

    printf("Enter the size of the array \(1 - 500\): ");
    scanf("%d", &n);

    fflush(stdin);
    printf("Enter elements in array : ");
    gets(a);

    fflush(stdin);
    printf("Enter element to be searched : ");
    scanf("%c", &b);

    if(search(a, n, b) == 1)
    printf("Found");

    else
    printf("Not Found");

}
