//
//  main.c
//  Quiz - 03
//
//  Created by Nafiur Rahman Dhrubo on 9/23/20.

//  Palindrome using recurtion.


#include <stdio.h>
#include <string.h>
void pln(char [], int);
int main ()

{
    char a[25];
    printf("Enter the word : ");
    scanf("%s", a);
    pln(a, 0);
    return 0;
}
 
void pln(char x[], int y)

{
    int len = strlen(x) - (y + 1);
    if (x[y] == x[len])
    {
        if (y + 1 == len || y == len)
        {
            printf("The word is a palindrome.\n");
            return;
        }
        pln(x, y + 1);
    }
    else
    {
        printf("The word is't a palindrome.\n");
    }
}
