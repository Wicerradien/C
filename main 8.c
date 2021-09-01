#include <stdio.h>

int main ()
{
    int arry1[100];
	int arry2[100];
	int arry3[100];
    int n, m = 1, o = 0;
    int i, j;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++)
        {
            printf("Element - %d : ", i);
	        scanf("%d", &arry1[i]);
	    }

    for(i = 0; i < n; i++)
        {
		arry2[i] = arry1[i];
		arry3[i] = 0;
        }

	for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
                {
                    if(arry1[i] == arry2[j])
                    {
                        arry3[j] = m;
                        m++;
                    }
			    }
			    m = 1;
        }

   for(i = 0; i < n; i++)
    {
      if(arry3[i] == 2){o++;}
    }
      printf("Duplicate elements in the array is : %d \n", o);

	  printf("\n\n");
}
