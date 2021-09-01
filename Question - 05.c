//
//  main.c
//  Question - 05
//
//  Created by Nafiur Rahman Dhrubo on 9/21/20.

//  Coordinates.


#include <stdio.h>
int abs_val(int y)
{
    if(y < 0)
        return(y * -1);
    else
        return(y);
}

int main()

{
    int x, y, a, b, current_coordinate, tatget_coordinate;
    printf("Enter X : ");
    scanf("%d", &x);
    a = abs_val(x);
    printf("Enter Y : ");
    scanf("%d", &y);
    b = abs_val(y);
    printf("Enter Current Coordinate : ");
    scanf("%d", &current_coordinate);
    printf("Enter Target Coordinate : ");
    scanf("%d", &tatget_coordinate);
    
   
    
    /*
    if (tatget_coordinate == 1)
    {
        printf("New value of x & y in the target coordinate is (%d, %d)\n", a, b);
    }
    else if (tatget_coordinate == 2)
        printf("New value of x & y in the target coordinate is (-%d, %d)\n", a, b);
    else if (tatget_coordinate == 3)
        printf("New value of x & y in the target coordinate is (-%d, -%d)\n", a, b);
    else
        printf("New value of x & y in the target coordinate is (%d, -%d\n", a, b);
    
    return 0;
  
    */

    switch (tatget_coordinate)
    {
        case 1:
            printf("New value of x & y in the target coordinate is (%d, %d)\n", a, b);
            break;
       case 2:
            printf("New value of x & y in the target coordinate is (-%d, %d)\n", a, b);
            break;
       case 3:
            printf("New value of x & y in the target coordinate is (-%d, -%d)\n", a, b);
            break;
       case 4:
            printf("New value of x & y in the target coordinate is (%d, -%d\n", a, b);
            break;
            
            
        default:
            break;
    }
    return 0;





}
