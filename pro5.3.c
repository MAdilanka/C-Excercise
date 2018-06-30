#include<stdio.h>
int main()
{
  int num1,num2,sum;
  printf("Enter Number 1 :");
  scanf("%d" ,&num1);
  printf("Enter Number 2 :");
  scanf("%d" ,&num2);

  sum=0;
  for(;num1<=num2;num1++)
    {
      sum+=num1;
     }
   printf("%d \n" ,sum);
   return 0;
}

