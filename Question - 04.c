//
//  main.c
//  Question - 04
//
//  Created by Nafiur Rahman Dhrubo on 8/24/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  Customs.

#include <stdio.h>
int fibonacci(int n)
{
  int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
int factorial(int x)
{
    int fact = 1, i;
    for(i=1;i<=x;i++)
        fact *= i;
    return fact;
}
int power(int x, int y)
{
    if (y != 0)
        return (x * power(x, y - 1));
    else
        return 1;
}
int sum(int x, int y)
{
    if (x % 2 == 0)
    {
        factorial(x);
    }
    else power(x, y);
        
    return 0;
}

int main()
{
    int n, a = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    a = sum(n, 0);
    printf("The Sum is %d\n", a);
    return 0;
}
