#include <stdio.h>

int main ()
{
    char str[100], str2[100];
    int b, end, count = 0, i;

    printf("Enter The String : ");
    gets(str);
    puts(str);

    while (str[count] != '\0')
    {
         count++;
    }
    end = count - 1;

    for (b = 0; b < count; b++)
        {
            str2[b] = str[end];
            end--;
        }

   str2[b] = '\0';

   printf("String In Rev : %s\n", str2);

   for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
    }

    printf("Uppercase String : %s\n", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
    }

    printf("Lowercase String: %s\n", str);
    printf("Lenght Of The String Is : %d\n", count);


    return 0;
}
