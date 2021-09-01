//
//  main.c
//  BMI
//
//  Created by Nafiur Rahman Dhrubo on 8/14/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  BMI calculatiom.

#include <stdio.h>
#include <math.h>
int main()
{
    float wt, ht, bmi = 0;
    printf("Enter your weight in pounds : ");
    scanf("%f", &wt);
    printf("Enter your height in inches : ");
    scanf("%f", &ht);
    bmi = (703 * wt)/pow(ht, 2);
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi == 18.5 && bmi <25)
        printf("Normal\n");
    else if (bmi == 25 && bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");
    return 0;
    
}
