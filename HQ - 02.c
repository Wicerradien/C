//
//  main.c
//  HQ - 02
//
//  Created by Nafiur Rahman Dhrubo on 3/10/21.
//

#include<stdio.h>
#include<math.h>
int main ()

{
  float a, b, c, d, root1, root2;
  
  printf("Enter a, b, c : ");
  scanf("%f %f %f", &a, &b, &c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0)
  
  {
    printf("Roots are complex number.\n");
    printf("Roots are : ");
    printf("%f + %fi \n", - b / (2 * a), sqrt (- d) / (2 * a));
    printf("%f% + %fi \n", - b / (2 * a), - sqrt(- d) / (2 * a));
  }
  
  else if (d == 0)
  
  {
   printf("Both roots are equal.\n");
   root1 = -b /(2* a);
   printf("Root are : %f \n", root1);
 
  }
  
  else
  {
   printf("Roots are real numbers.\n");
  
   root1 = ( - b + sqrt(d)) / (2 * a);
   root2 = ( - b - sqrt(d)) / (2 * a);
   
   printf("Roots are : %f , %f\n", root1, root2);
      
  }
 
  return 0;
}
