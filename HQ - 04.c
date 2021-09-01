//
//  main.c
//  HQ - 04
//
//  Created by Nafiur Rahman Dhrubo on 3/10/21.
//

#include <stdio.h>
int main ()

{
    int dividend, divisor, quotient, quotientx, remainder, remainderx;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    quotientx = divisor / dividend;

    remainder = dividend % divisor;
    remainderx = divisor % dividend;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    
    printf("After Swap Quotient = %d\n", quotientx);
    printf("After Swap Remainder = %d\n", remainderx);
    
    return 0;
}
