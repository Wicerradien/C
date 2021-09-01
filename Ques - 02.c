#include<stdio.h>

int main ()
{
    int num, rem, sum = 0, i;
    char ch;
do
{
    printf("Enter The Number : ");
    scanf("%d", &num);

    for(i = 1; i < num; i++)
        {
            rem = num % i;
    if (rem == 0)
        {
            sum = sum + i;
        }
        }
    if (sum == num)
        printf("%d Is A Perfect Number\n", num);
    else
        printf("\n%d Isn't a Perfect Number\n");


    printf ("\nDo You Want To Repeat The Operation Y/N : ");
    scanf (" %c", &ch);
}
    while (ch == 'y' || ch == 'Y');
}
