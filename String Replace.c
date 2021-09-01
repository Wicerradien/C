//
//  main.c
//  String Replace
//
//  Created by Nafiur Rahman Dhrubo on 10/3/20.
//

#include<stdio.h>
#include<string.h>
void replace_string(char a[],char b[],char c[])
{
    int aLen, bLen, cLen;
    int i = 0, j, k;
    int flag = 0, start, end;
    aLen = alen(a);
    bLen = alen(b);
    cLen = alen(c);
    for(i = 0; i < aLen; i++)
    {
        flag = 0;
        start = i;
        for(j = 0;a[i] == b[j]; j++, i++)
        if(j == bLen - 1)
            flag = 1;
        end = i;
        if(flag == 0)
            i -= j;
        else
        {
            for(j = start; j < end; j++)
            {
                for(k = start; k < aLen; k++)
                a[k] = a[k + 1];
                aLen--;
                i--;
                
            }

            for(j = start; j < start+newLen;j++)
            {
                for(k=stringLen;k>=j;k--)
                string[k+1]=string[k];
                string[j]=new_str[j-start];
                stringLen++;
                i++;
                
            }
            
        }
        
    }
    
}

int main ()

{
    char a[100],b[100] = "NSU", c[100] = "<universityName>";
    printf("\nEnter the string: ");
    gets(a);
    replace_string(a, b, c);
    printf("\nThe string after replacing : %s\n", a);
}
