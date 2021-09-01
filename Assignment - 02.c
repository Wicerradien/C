//
//  main.c
//  AS01 - P02
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//

#include<stdio.h>
#include<math.h>

int main ()
{
    int dec = 0, rem, i = 0, len = 0;
    char hex[500];
    printf("Enter the Hexadecimal Number : ");
    scanf("%s", hex);
    
    while(hex[i] != '\0')
    {
        len++;
        i++;
    }
    
    len--;
    i = 0;
    
    while(len >= 0)
    {
        rem = hex[len];
        if(rem >= 48 && rem <= 57)
            rem = rem - 48;
        else if(rem >= 65 && rem <= 70)
            rem = rem - 55;
        else if(rem >= 97 && rem <= 102)
            rem = rem - 87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit\n");
            return 0;
        }
        dec = dec + (rem * pow(16, i));
        len--;
        i++;
    }
    printf("\nDecimal Value = %d\n", dec);
    return 0;
}
