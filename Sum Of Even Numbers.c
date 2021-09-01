//
//  main.c
//  Sum Of Even Numbers Using Recurtion
//
//  Created by Nafiur Rahman Dhrubo on 10/3/20.
//

#include <stdio.h>
int even_Sum (int x);
int main ()

{
    int n, sum;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Sum of even numbers %d\n", even_Sum(n));
    return 0;
}

int even_Sum(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x % 2 == 0)
    {
        return 2 * x + even_Sum(x - 1);
    }
    
}
