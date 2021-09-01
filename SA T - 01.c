#include <stdio.h>

int main ()
{
    int num, sum = 0, fd, ld;

    printf("Enter The Number : ");
    scanf("%d", &num);

    ld = num % 10;

    fd = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    fd = num;

    sum = fd + ld;

    printf("\n\nSum Of First & Last Digit = %d\n\n", sum);

    return 0;
}
