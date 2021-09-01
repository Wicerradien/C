//
//  SA2 T - 01
//  SA2 T - 01
//
//  Created by Nafiur Rahman Dhrubo on 21/05/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <String.h>

struct Date
{
    int M, D, Y;
};

struct S_Info
{
    char Title[50];
    char Name[20];
    struct Date RD;
    int Rating;
}x[100];

int n = 0, i = 0, j = 0, a = 0, sum = 0, num = 0;

void Fl_open ()
{
    FILE *fp = fopen("S_Info.txt", "r");

    if(fp == NULL)
    {
        fp = fopen("S_Info.txt", "w");
        fclose(fp);
    }

    num = fread(x, sizeof(struct S_Info), 100, fp);
    fclose(fp);
}

void Fl_close ()
{
    FILE *fp = fopen("S_Info.txt", "w");
    if(fp == NULL)
    {
        printf("\aError");
        exit(1);
    }
    fwrite(x, sizeof(struct S_Info), num, fp);

    fclose(fp);
}





void Enter ()
{
    printf("\n\nData On The Database = %d\n\n", num);
    printf("How Many Entry Do You Want To Add = ");
    scanf("%d", &n);

    sum = n + num;

    for(i = num, j = 0; i < sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter Title = ");
        gets(x[i].Title);
        fflush(stdin);
        printf("Enter Singer's Name = ");
        gets(x[i].Name);
        fflush(stdin);
        printf("Enter Release Date");
        printf("(DD/MM/YY) : ");
        fflush(stdin);
        scanf("%d%d%d", &x[i].RD.D, &x[i].RD.M, &x[i].RD.Y);
        printf("Enter Rating = ");
        scanf("%d", &x[i].Rating);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void Show ()
{
    for(i = 0; i < num; i++)
    {
        printf("\n");
        printf("Serial Number = : %d\n", i);
        printf("Title = ");
        puts(x[i].Title);
        printf("Singer's Name = ");
        puts(x[i].Name);
        printf("Release Date : %d\/%d\/%d \n", x[i].RD.D, x[i].RD.M, x[i].RD.Y);
        printf("Rating = %d", x[i].Rating);
        printf("\n\n");
    }
}

void Delete ()
{
    int f, h;
    printf("Enter Serial Of The Song That You Want To Delete = ");
    scanf("%d", &f);
    if(f < num)
    {
        printf("\n\nWhat Do You Want\n\n");
        printf("1. Remove Full Data\n2. Remove Title\n3. Remove Singer's Name\n4. Remove Release Date\n5. Remove Rating\n\nOption = ");
        scanf("%d", &h);
        if(h == 1)
        {
            while(f < num)
            {
                strcpy(x[f].Title, x[f + 1].Title);
                strcpy(x[f].Name, x[f + 1].Name);
                x[f].RD = x[f + 1].RD;
                x[f].Rating = x[f + 1].Rating;
                f++;
            }
            num--;
        }
        else if(h == 2)
        {
            strcpy(x[f].Title, "Deleted");

        }
        else if(h == 3)
        {
            strcpy(x[f].Name, "Deleted");
        }
        else if(h == 4)
        {
            x[f].RD.D = 00;
            x[f].RD.M = 00;
            x[f].RD.Y = 00;
        }
        else if(h == 5)
        {
            x[f].Rating = 0;
        }
    }
    else
        printf("\n\n\aInvalid Serial !!!\n\n");
}

int main ()
{
    Fl_open();
    int c;
    while(c != 4)
    {
        printf("\nNote : You Need To Close The App By Selecting 4 To Save The Data To The File Everytime.\n");
        printf("\n\nSelect Option\n\n1. Enter Data\n2. Show Data\n3. Delete Data\n4. Exit\n\nOption = ");
        scanf("%d", &c);
        fflush(stdin);
        if(c == 1)
        {
            system("cls");
            Enter();
        }
        else if(c == 2)
        {
            system("cls");
            Show();
        }
        else if(c == 3)
        {
            system("cls");
            Delete();

        }
        else if(c == 4)
        {
            Fl_close();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\n\aInvalid Input !!!");
        }
        printf("\n\n");
    }
}