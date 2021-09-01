//
//  main.c
//  CSE 173 T - 03
//
//  Created by Nafiur Rahman Dhrubo on 5/19/21.
//

#include <stdio.h>

int main()
{
   int A[8] = {1, 1, 1, 1, 0, 0, 0, 0};
   int B[8] = {1, 1, 0, 0, 1, 1, 0, 0};
   int C[8] = {1, 0, 1, 0, 1, 0, 1, 0};

   int i;

   printf("\n\t\(P ^ Q\) v R\n\n\n");

   for(i = 0; i < 8; i++)
   {
       printf("\n\t%d    %d    %d\n", A[i], B[i], C[i]);

       if(A[i] == 1 && B[i] == 1)
        printf("1");
       else
        printf("0");
       if((A[i] == 1 && B[i] == 1) || C[i] == 1)
        printf("1");
       else
        printf("0");
   }

}
