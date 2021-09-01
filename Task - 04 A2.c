#include <stdio.h>
#include <string.h>

int check(char y)
{
  if (y == 'a' || y == 'A' || y == 'e' || y == 'E' || y == 'i' || y == 'I' || y =='o' || y == 'O' || y == 'u' || y == 'U')
  return 1;

  return 0;
}

int main ()
{
  char x[50], y[50];
  int a, b = 0;

  printf("Enter the string : ");
  gets(x);

  for (a = 0; x[a] != '\0'; a++)
    {
    if (check(x[a]) == 0)
    {
      y[b] = x[a];
      b++;
    }
    }

  y[b] = '\0';

  strcpy(x, y);

  printf("After removing vowels: %s\n", x);

  return 0;
}
