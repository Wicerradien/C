//
//  main.c
//  HQ - 05
//
//  Created by Nafiur Rahman Dhrubo on 3/10/21.
//

#include <stdio.h>

int main()
{
    double Celsius, Fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &Celsius);
    Fahrenheit = Celsius * 9 / 5 + 32;
    printf("%lf Celsius = %lf Fahrenheit\n", Celsius, Fahrenheit);
    return 0;
}
