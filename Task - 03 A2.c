#include<stdio.h>

int main ()
{
   int u = 0, l = 0, i = 0;
   char c[50];

   printf("Enter The String : ");
   gets(c);

   while (c[i] != '\0')
    {
      if (c[i] >= 'A' && c[i] <= 'Z')
         u++;
      if (c[i] >= 'a' && c[i] <= 'z')
         l++;
      i++;
    }

   printf("\nUppercase Letters : %d\n", u);
   printf("\nLowercase Letters : %d\n", l);

   return (0);
}
