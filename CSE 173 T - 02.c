//
//  main.c
//  CSE 173 T - 02
//
//  Created by Nafiur Rahman Dhrubo on 5/19/21.
//

#include <stdio.h>

char conjuctionT(char a, char b)
{
    if(!(a == 'T'|| a == 't') && (b == 'T'|| b == 't'))

    {
        return 'T';
    }

   else
   {
       return 'F';
       
   }
}

int main()
{
    char a, b;
    printf("Enter P : ");
    scanf("%c", &a);
    fflush(stdin);
    printf("Enter Q : ");
    scanf("%c", &b);
    printf("The Negation Of Conjuction Of A, B Is %c\n", conjuctionT(a, b));
    return 0;
}
