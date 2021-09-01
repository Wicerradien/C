#include <stdio.h>

float getArea(float a, float b, float h)
{
    return ( ((a + b) / 2) * h);
}

int main ()
{
    float b, h, a, A;

    printf("\nEnter Side 1 : ");
    scanf("%f", &a);

    printf("Enter Side 2 : ");
    scanf("%f", &b);

    printf("Enter Height : ");
    scanf("%f", &h);

    A = getArea(a, b, h);

    printf("Area : %f\n", A);
    return 0;
}