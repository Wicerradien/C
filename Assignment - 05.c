//
//  main.c
//  A01 - P05
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//


#include <stdio.h>

int main ()
{
   int n;
   char c;
   
    do
    {
       printf("Enter an integer number : ");
       scanf("%d", &n);
 
       if(n == 0)
           printf("Number is Zero.\n");
       else if(n > 0)
           printf("Number is Positive.\n");
       else
           printf("Number is Negative.\n");
 
       printf("\n\nWant to check again (press Y/y for 'yes') :");
       fflush(stdin);
       scanf("%c", &c);
   } while(c == 'Y' || c == 'y');

   printf("\nAstala Vista\n");
 
   return 0;
}
