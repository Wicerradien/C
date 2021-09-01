//
//  main.c
//  AS01 - P01
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//

#include<stdio.h>
long factorial(int n)
{
    int c;
      long result = 1;
    
      for( c = 1 ; c <= n ; c++ )
            result = result * c;
    
      return ( result );
}

int main ()
{
   int n, sum = 0;

   printf("Enter n value : ");
   scanf("%d", &n);

   for(int i = 1; i <= n; i++)
   {
     sum += i/factorial(i);
   }

    printf("%d\n", sum);

   return 0;
}
