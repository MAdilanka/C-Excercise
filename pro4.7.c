#include <stdio.h>
int main ()
{
  float a,v,u,t;
  printf("Enter v : \n");
  scanf("%F" ,&v);

  printf("Enter u : \n");
  scanf("%f" ,&u);

  printf("Enter t : \n" );
  scanf("%f" ,&t);

  if (t>0)
    {
     a=(v-u)/t;
     printf("Acceleration is : %.2f m/s \n" ,a);
     }
  else 
    printf("Wrong \n");

 return 0;

}
