//
//  main.c
//  AS01 - P06
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//

#include <stdio.h>

int main ()
{
    int x, y, z;
    int a, b, c, sum = 0;

    printf("Enter three sides of triangle : ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;

    if((x + y > z) && (x + z > y) && (y + z > x) && (sum == 180))
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
