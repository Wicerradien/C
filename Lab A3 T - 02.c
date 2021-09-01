#include <stdio.h>

struct Date
{
    int M, D, Y;
};

struct Employee
{
    char Name[50];
    struct Date DOB, DOJ;
    int Salary;
}emp[100];

int n;

int main ()
{
    printf("Enter Array Size \(1 - 100\): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter Name : ");
        fflush(stdin);
        gets(emp[i].Name);
        printf("\nEnter Date Of Joining\n");
        printf("(DD/MM/YY) : ");
        fflush(stdin);
        scanf("%d%d%d", &emp[i].DOJ.D, &emp[i].DOJ.M, &emp[i].DOJ.Y);
        fflush(stdin);
        printf("\nEnter Date Of Birth\n");
        printf("(DD/MM/YY) : ");
        fflush(stdin);
        scanf("%d%d%d", &emp[i].DOB.D, &emp[i].DOB.M, &emp[i].DOB.Y);
        printf("\nEnter Salary : ");
        fflush(stdin);
        scanf("%d", &emp[i].Salary);
    }

    printf("\nEmployees From 1 - %d\n", n);

    for (int i = 0; i < n; i++)
    {
            printf("\nName : %s \nD.O.B : %d\/%d\/%d \nStarting Date : %d\/%d\/%d \nSalary : %d\n", emp[i].Name,  emp[i].DOB.D, emp[i].DOB.M, emp[i].DOB.Y, emp[i].DOJ.D, emp[i].DOJ.M, emp[i].DOJ.Y, emp[i].Salary);
    }

    return  0;
}