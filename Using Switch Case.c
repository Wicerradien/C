//
//  main.c
//  Switch Case
//
//  Created by Nafiur Rahman Dhrubo on 8/14/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

//  Positive & Negitive.  

#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    switch (input > 0)
    {
        case 1:
            printf("Positive", input);
        break;
            
        case 0:
            switch (input < 0)
            {
                case 1:
                    printf("Not Positive", input);
                    break;
            }
        break;
    }

    return 0;
}
