#include <stdio.h>

int gcd(int a, int b)
{
    int i;

    for(i = a; i >= 1; i--)
        {
            if(a % i == 0 && b % i == 0)
            break;
        }
    return i;
}

void main ()
{
    int choice, num, i;
    int x, y = -1;
    double fact;

    while(1)
        {
            printf("1. Factorial\n");
            printf("2. Prime Or Not\n");
            printf("3. GCD\n");
            printf("4. Exit\n");
            printf("\nYour Choice : ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("\nEnter Number :");
                    scanf("%d", &num);
                    fact = 1;
                    for(i = 1; i <= num; i++)
                        fact = fact * i;
                    printf("\nFactorial = %lf\n\n", fact);
                    break;
                case 2:
                    printf("\nEnter Number :");
                    scanf("%d", &num);
                    for(i = 2; i < num; i++)
                        {
                            if(num % i == 0)
                            {
                                printf("\nNot A Prime Number\n\n");
                                break;
                            }
                            else printf("\nPrime Number\n\n");
                            break;
                        }
                        break;
                case 3:
                    printf("\nEnter Numbers \(Enter 0 At Last To Exit & Get The GCD\)\n");
                    while (1)
                        {
                            scanf ("%d", &x);
                            if (x < 1)
                                break;
                            else if (y ==- 1)
                                y = x;
                            else if (x < y)
                                y = gcd (x, y);
                            else
                                y = gcd (y, x);
                        }
                        printf("\nGCD : %d\n\n", y);
                        break;
                case 4:
                    exit(0);
            }
 }

}
