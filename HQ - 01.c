//
//  main.c
//  HQ - 01
//
//  Created by Nafiur Rahman Dhrubo on 3/10/21.
//

#include <stdio.h>
#include <math.h>
int main ()

{
    double x, c;
    printf("Enter X : ");
    scanf("%lf", &x);
    c = 5 * x * x * x - 4 * x * x + sqrt(x) + 3;
    printf("%lf\n", c);
}
