//
//  main.c
//  3
//
//  Created by Nafiur Rahman Dhrubo on 4/16/21.
//

#include <stdio.h>

int main ()
{
    int age;
    
    printf("Enter the age of the candidate : ");
    scanf("%d", &age);
    
    if (age >= 25 && age <= 45)
    {
        printf("You are eligable to work\n");
    }
    else
        printf("Not eligable to work\n");
    
    return 0;
}
