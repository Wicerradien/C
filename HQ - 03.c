//
//  main.c
//  HQ - 03
//
//  Created by Nafiur Rahman Dhrubo on 3/10/21.
//

#include <stdio.h>
int main ()
{
    
    float s,a;
    float v, r, h;
    
    printf("Side of cube : ");
    scanf("%f", &s);
    printf("Enter radius for cylinder : ");
    scanf("%f",&r);
    printf("Enter height for cylinder : ");
    scanf("%f", &h);
   
    a = s * s * s;
    v = (22 * r * r * h) / 7;
    
    printf("Volume of cube is : %f\n", a);
    printf("Volume of cylinder is : %f\n", v);
    
    return 0;
}
