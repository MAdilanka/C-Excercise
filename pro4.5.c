#include<stdio.h>
int main ()
{
  int marks;
  printf("Enter Marks : \n");
  scanf("%d" ,&marks);

  if (marks >=75 && marks <100)
      printf("A \n");
  else if (marks <75 && marks >50)
      printf("B \n");
  else if (marks <50 && marks >25)
      printf("C \n");
  else
      printf("F \n");
return 0;

}
