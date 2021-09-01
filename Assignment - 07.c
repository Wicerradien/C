//
//  main.c
//  A01 - P07
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//

#include <math.h>
#include <stdio.h>
int main ()
{
    double a, b, c, d, R1, R2, RP, IP;
    printf("Enter a, b, c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;
    
    if (d > 0)
    {
        R1 = (-b + sqrt(d)) / (2 * a);
        R2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %lf and Root2 = %lf", R1, R2);
    }

    else if (d == 0)
    {
        R1 = R2 = -b / (2 * a);
        printf("Root1 = Root2 = %lf;", R1);
    }

    else
    {
        RP = -b / (2 * a);
        IP = sqrt(-d) / (2 * a);
        printf("Root1 = %lf + %lfi & Root2 = %f - %fi", RP, IP, RP, IP);
    }

    return 0;
}
