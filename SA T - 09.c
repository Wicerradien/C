#include <stdio.h>
int getnum ()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    return n;
}
void display (int n)
{
    int m, sum = 0;
    while(n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
   if (sum % 9 == 0)
   {
       printf("Divisible By 9");
   } else printf("Not Divisible By 9");

}

int main ()
{
    int n = getnum();
    display(n);
    return 0;
}