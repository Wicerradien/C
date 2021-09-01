#include <stdio.h>
#include <string.h>

int countOccurrences(char * str, char * search);


int main ()
{
    char str[100];
    char search[100];
    int count;

    printf("Enter thr string : ");
    gets(str);
    printf("Enter word to search occurrences : ");
    gets(search);

    count = countOccurrences(str, search);

    printf("Total occurrences of '%s' : %d", search, count);

    return 0;
}


int countOccurrences(char * str, char * search)
{
    int i, j, f, count;
    int sl, searchl;

    sl = strlen(str);
    searchl = strlen(search);

    count = 0;

    for(i = 0; i <= sl - searchl; i++)
        {
            f = 1;
            for(j = 0; j < searchl; j++)
                {
                    if(str[i + j] != search[j])
                    {
                        f = 0;
                        break;
                    }
                }
    if(f == 1)
        {
            count++;
        }
        }

    return count;
}
