#include <stdio.h>
#include <math.h>



int main(void)

{
  
    int amount; 
    int Billets20,Billets10,Billets5,Billets1 ;
    printf("enter your amount in dolars: ");
    scanf("%d",&amount);
    Billets20=amount/20;
    amount=amount%20;
    Billets10=amount/10;
    amount=amount%10;
    Billets5=amount/5;
    amount=amount%5;
    Billets1=amount;
    
    printf("$20 billets: %d\n", Billets20); 
     printf("$10 billets: %d\n", Billets10);  
    printf("$5 billets: %d\n", Billets5);

    printf("$1billets: %d\n", Billets1);





    





    
     return 0;

}