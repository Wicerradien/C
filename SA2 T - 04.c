//
//  SA2 T - 04
//  SA2 T - 04
//
//  Created by Nafiur Rahman Dhrubo on 21/05/21.
//

#include <stdio.h>
#define MAX_SIZE 100

int min_add(int alpha_up, int alpha_low, int digit, int sp_cha, int length)
{
    if(alpha_up >= 1 && alpha_low >= 2 && digit >= 1 && sp_cha >= 1 && length >= 8)
    {
        printf("\nStrong Password\n\n");
    }

    else
    {
        if(alpha_up < 1)
        {
            printf("\nInclude At Least 1 Upper Case Character.\n");
        }

        if(alpha_low < 2)
        {
            printf("Include At Least 2 Lower Case Character.\n");
        }

        if(digit < 1)
        {
            printf("Include At Least 1 Number Digit.\n");
        }

        if(sp_cha < 1)
        {
            printf("Include At Least 1 Special Character.\n");
        }

        if(length < 8)
        {
            printf("Add %d Character To Make Your Password Length 8.\n", 8 - length);
            printf("Minimum Character To Add : %d\n", 8 - length);
        }

    }

    return 0;
}

int main()
{
    char str[MAX_SIZE];
    int alpha_low, alpha_up, digits, others, i, length;

    alpha_low = alpha_up= digits = others = i = 0;


    printf("Enter Password Length : ");
    scanf("%d", &length);
    fflush(stdin);
    printf("Enter Password : ");
    gets(str);

    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z'))
        {
            alpha_low++;
        }
        else if((str[i] >= 'A' && str[i]<= 'Z' ))
        {
            alpha_up++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    /* Just To Show Counts
    printf("\nUpper Case Letters = %d\n", alpha_up);
    printf("Lower Case Letters = %d\n", alpha_low);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", others);
    printf("Length = %d\n", i); */

    min_add(alpha_up, alpha_low, digits, others, length);

    return 0;
}