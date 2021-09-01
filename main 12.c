#include <stdio.h>
#define MAX_SIZE 100

void replaceAll(char * arr, char oldChar, char newChar);


int main ()
{
    char arr[MAX_SIZE], oldChar, newChar;

    printf("Enter the string : ");
    gets(arr);

    printf("Enter character to replace : ");
    oldChar = getchar ();
    getchar();

    printf("Enter character to replace '%c' with : ", oldChar);
    newChar = getchar();

    printf("\nString before replacing : \n%s", arr);

    replaceAll(arr, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c' : \n%s", oldChar, newChar, arr);

    return 0;
}

void replaceAll(char * arr, char oldChar, char newChar)
{
    int i = 0;

    while(arr[i] != '\0')
        {
            if(arr[i] == oldChar)
            {
                arr[i] = newChar;
            }
            i++;
        }
}
