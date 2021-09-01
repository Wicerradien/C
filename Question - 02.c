//
//  main.c
//  Question - 02
//
//  Created by Nafiur Rahman Dhrubo on 8/24/20.
//  Copyright © 2020 Nafiur Rahman Dhrubo. All rights reserved.

// Coordinates.

#include <stdio.h>
int main()

{
    int x, y, current_coordinate, tatget_coordinate;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Y : ");
    scanf("%d", &y);
    printf("Enter Current Coordinate : ");
    scanf("%d", &current_coordinate);
    printf("Enter Target Coordinate : ");
    scanf("%d", &tatget_coordinate);
    
   
    
    /*
    if (tatget_coordinate == 1)
    {
        printf("New value of x & y in the target coordinate is (%d, %d)\n", x, y);
    }
    else if (tatget_coordinate == 2)
        printf("New value of x & y in the target coordinate is (-%d, %d)\n", x, y);
    else if (tatget_coordinate == 3)
        printf("New value of x & y in the target coordinate is (-%d, -%d)\n", x, y);
    else
        printf("New value of x & y in the target coordinate is (%d, -%d\n", x, y);
    
    return 0;
  
    */

    switch (tatget_coordinate)
    {
        case 1:
            printf("New value of x & y in the target coordinate is (%d, %d)\n", x, y);
            break;
       case 2:
            printf("New value of x & y in the target coordinate is (-%d, %d)\n", x, y);
            break;
       case 3:
            printf("New value of x & y in the target coordinate is (-%d, -%d)\n", x, y);
            break;
       case 4:
            printf("New value of x & y in the target coordinate is (%d, -%d\n", x, y);
            break;
            
            
        default:
            break;
    }
    return 0;





}
