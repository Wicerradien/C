//
//  main.c
//  Question - 03
//
//  Created by Nafiur Rahman Dhrubo on 8/24/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  Perfect Square.


#include <stdio.h>
int main()

{
    int a, i;
    
    printf("Enter the number : ");
    scanf("%d", &a);
    
    i = 0;
    while (i <= a)
    {
        i++;
        if (a == i*i)
        {
            printf("%d is a perfect square\n", a);
            return 0;
        }
    }
    
    //for (i = 0; i <= a; i++)
    //{
    //   if (a == i*i)
    //    {
    //        printf("%d is a perfect square\n", a);
    //        return 0;
    //   }
    //}
    printf("Not a perfect square\n");
    return 0;
}

