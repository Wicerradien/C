//
//  main.c
//  1
//
//  Created by Nafiur Rahman Dhrubo on 4/16/21.
//

#include <stdio.h>
int main ()
{
    int x, y;
    printf("Input 1st integer: ");
    scanf("%d", &x);
    printf("Input 2st integer: ");
    scanf("%d", &y);
    
    printf("The 1st Int Is : ");
    if(x == 0)
    {
        printf("Positive\n");
        
    }
    else if(x < 0 && (x % 2) != 0)
    {
        printf("Negative Odd\n");
    }
    else if(x < 0 && (x % 2) == 0)
    {
        printf("Negative Even\n");
    }
    else if(x > 0 && (x % 2) != 0)
    {
        printf("Positive Odd\n");
    }
    else if(x > 0 && (x%2) == 0)
    {
        printf("Positive Even\n");
    }
    
    printf("The 2st Int Is : ");
    if(y == 0)
    {
        printf("Positive\n");
    }
    else if(y < 0 && (y % 2) != 0)
    {
        printf("Negative Odd\n");
    }
    else if(y < 0 && (y % 2) == 0)
    {
        printf("Negative Even\n");
    }
    else if(y > 0 && (y % 2) != 0)
    {
        printf("Positive Odd\n");
    }
    else if(y > 0 && (y % 2) == 0)
    {
        printf("Positive Even\n");
    }
    
    return 0;
}
