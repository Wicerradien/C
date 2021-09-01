//
//  main.c
//  Matrix Manupulation
//
//  Created by Nafiur Rahman Dhrubo on 10/3/20.
//



#include<stdio.h>

void input_matrix(int a[5][5],int row,int col)
{
    int i, j;
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col; j++)
        {
            printf("Enter Element %d %d : ", i, j);
            scanf("%d",&a[i][j]);
            
        }
    }
}

void add_matrix(int m1[5][5],int m2[5][5],int m3[5][5],int row,int col)
{
    int i, j;
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col; j++)
    {
        m3[i][j] =  (m1[i][j] + m2[i][j]);
    }
        
    }
}

void print_matrix(int m[5][5],int row,int col)
{
    int i, j;
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
        
    }
}

void transpose(int t[5][5],int row,int col)
{
    int i, j, a[5][5];
    for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
    {
            t[j][i] = a[i][j];
    }
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}

int main ()

{
    int m1[5][5],m2[5][5],m3[5][5],row = 5,col = 5;
    input_matrix(m1,row,col);
    input_matrix(m2,row,col);
    add_matrix(m1,m2,m3,row,col);
    print_matrix(m3,row,col);
    transpose(m3, row, col);
  
}
