#include <stdio.h>

void printASCII ()
{
    char str[100];
    int x;
    printf("Enter The String : ");

    gets(str);

    for(x = 0; str[x] != '\0'; x++)
        {
            printf("%d ", str[x]);
        }
}



int x;

int main ()
{
    printASCII();

    return 0;
}
