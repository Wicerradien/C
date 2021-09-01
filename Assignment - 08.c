//
//  main.c
//  A01 - P08
//
//  Created by Nafiur Rahman Dhrubo on 4/10/21.
//

#include <stdio.h>

int main ()
{
    printf("\n\t\t\tW A K A N D A  \n\t\t\tF O R E V E R\n\n");
    printf("\t  Welcome To The Resturent\n");
    
    int e, r, t, y, c;
    char ch;
    
    printf("\nHere's The Menu : \n\nB = Burgur = 200\n\nF = French Fries = 50\n\nP = Pizza = 500\n\nS = Sandwitch = 150\n\nC = Coke\n\nType B/F/P/S/C : ");
    scanf("%c", &ch);
     
    switch (ch)
    
    {
        case 'B':
            printf("\nB = Burgur\n");
            printf("\nEnter Quantity : ");
            scanf("%d", &e);
            printf("\nAmmount To Be Paid : %d\n", e * 200);
            break;
        case 'F' :
            printf("\nF = French Fries\n");
            printf("\nEnter Quantity : ");
            scanf("%d", &r);
            printf("\nAmmount To Be Paid : %d\n", r * 50);
            break;
        case 'P' :
            printf("\nP = Pizza");
            printf("\nEnter Quantity : ");
            scanf("%d", &t);
            printf("\nAmmount To Be Paid : %d\n", t * 500);
            break;
        case 'S':
            printf("\nS = Sandwitch");
            printf("\nEnter Quantity : ");
            scanf("%d", &y);
            printf("\nAmmount To Be Paid : %d\n", y * 150);
            break;
        case 'C':
            printf("\nC = Coke\n");
            printf("\nEnter Quantity : ");
            scanf("%d", &c);
            printf("\nAmmount To Be Paid : %d\n", c * 40);
            break;
            
        default: printf("\n\tW A K A N D A  \n\tF O R E V E R\n\n");
    
     }
    
    return 0;
}
