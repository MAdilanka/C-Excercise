#include<stdio.h>
int main()
{
  float price,total;
  total=0;
do
  {
  printf("Enter Price(0 to end) :");
  scanf("%f" ,&price);
  total += price ;
  }

   while(price >0);

   printf ("Total =%.2f \n" ,total);
   return 0;  
}
