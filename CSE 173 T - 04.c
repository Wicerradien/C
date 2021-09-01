//
//  main.c
//  CSe 173 T - 04
//
//  Created by Nafiur Rahman Dhrubo on 5/19/21.
//

#include <stdio.h>

int derivative(int x)
{
    return 6;
}

int increasing(int i, r)
{
    int p;
    for (p = i; p <= r; p++)
    {
        if(derivative(p) < 0)
            return 0;
        
    }
    return 1;
    
}

int decreasing(int i, r)
{
    int p;
    for(p = i; p <= r; p++)
    {
        if(derivative(p) > 0)
            return 0;
        
    }

int main()
{
    inr a = -100000, b = 100000;
    if(increasing(a, b) >= 1)
    {
        printf("Increasing");
    }
    else if (decreasing(a, b) <= -1)
    {
        printf("Deacreasing");
    }
    else
    {
        printf("Neither Increasing Or Decreasing");
    }
    
    return 0;
}
