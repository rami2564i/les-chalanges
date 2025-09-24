#include <stdio.h>
int main(void)

{
    double amount;
    printf("enterd the amount:");
    scanf("%lf",&amount);
    printf("total with 5%% tax is :  $%.2f\n" ,amount*1.05);
    
    
     return 0;

}