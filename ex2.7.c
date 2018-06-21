#include <stdio.h>
int main() 
{
   float a,b,sum ;
   printf("Enter 1st Number : \n");
   scanf ("%f" ,&a);
   printf ("Enter 2nd Number : \n");
   scanf ("%f" ,&b);
   sum = a + b ;
   printf("answer > %.2f\n" ,sum);
   return 0;
}
