#include<stdio.h>
int main()
{
    float amount,discount,final_amount;
    printf("Enter Amount : \n");
    scanf("%f" ,&amount);

    if (amount >=1000) 
   {  
    discount= amount*0.05;
    final_amount=amount-discount;
    
    printf("Discount : %.2f \n" ,discount);
    printf("Final Amount : %.2f \n" ,final_amount);
    }

     if ( amount < 1000)
     {
       printf("No discount \n");
     }
     
return 0;    

}
