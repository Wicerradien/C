#include <stdio.h>
#include <string.h>

void delete(char str[], char ch)
{
    int i, j = 0;
    int size;
    char ch1;
    char str1[10];
    size = strlen(str);
    for (i = 0; i < size; i++)
        {
            if (str[i] != ch)
                {
                    ch1 = str[i];
                    str1[j] = ch1;
                    j++;
                }
        }
        str1[j] = '\0';
        printf("\nAfter Del : %s", str1);
}

int main ()
{
    char str[10];
    char ch;
    printf("Enter Numbers In Array \(With Spaces\) : ");
    gets(str);
    printf("\nEnter Key : ");
    scanf("%ch", &ch);
    delete(str, ch);
    return 0;
}
