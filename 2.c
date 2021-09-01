//
//  main.c
//  2
//
//  Created by Nafiur Rahman Dhrubo on 4/16/21.
//

#include <stdio.h>

int main ()
{
    int a;

    printf("Enter number(1 - 5) : ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("I\n");
            break;
        case 2:
            printf("II\n");
            break;
        case 3:
            printf("III\n");
            break;
        case 4:
            printf("IV\n");
            break;
        case 5:
            printf("V\n");
            break;
        default:
            printf("Invalid input! Please enter number between 1 - 5");

    }

    return 0;
}
