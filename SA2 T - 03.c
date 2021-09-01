//
//  SA2 T - 03
//  SA2 T - 03
//
//  Created by Nafiur Rahman Dhrubo on 21/05/21.
//

#include <stdio.h>
#include <math.h>

int print_sum(int aj);

int main()
{
    int n;
    static double c;
    printf("\nEnter The Length : ");
    scanf("%d", &n);
    printf("\n\nFirst %d Terms Of Series Are : \n", n);
    printf("%.lf %.lf %.lf ", pow(1, 2), pow(5, 2), pow(6, 2));
    c = print_sum(n - 2);
    printf("\nTotal Sum : %.lf\n\n", c + 62.00);
    return 0;
}

int print_sum(int aj)
{
    static double first = 5.00, second = 6.00, sum, c;
    if(aj > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%.lf ", pow(sum, 2.00));
        c += pow(sum, 2.00);
        print_sum(aj - 1);
    }
    else
    {
        printf("\n\n");
        return c;
    }
}