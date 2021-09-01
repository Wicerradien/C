//
//  main.c
//  Question - 01
//
//  Created by Nafiur Rahman Dhrubo on 8/24/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  Celsius to Farenheit (Custom).

#include <stdio.h>
#include <math.h>
int main()

{
    double Celsius, Fahrenheit = 0;
    int ac, b;
    
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &Celsius);
    
    Fahrenheit = pow(Celsius,2) - pow(Celsius, 4) * pow(10, 3);
    
    printf("%lf Celsius = %lf Fahrenheit\n", Celsius, Fahrenheit);

    b = pow(Fahrenheit, 2);
    ac = b % 15;
    
    printf("The user should turn on the AC for %d hourse\n", ac);
    
    return 0;
}
