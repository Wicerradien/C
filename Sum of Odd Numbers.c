//
//  main.c
//  Sum of Series
//
//  Created by Nafiur Rahman Dhrubo on 8/14/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  Sum of series.  


#include <stdio.h>
double sum(int n)
{
  double i, s = 0.0;
  for (i = 1; i <= n; i+=2)
      s = s + 1/i;
  return s;
}
  
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    printf("Sum is %f", sum(n));
    return 0;
}
