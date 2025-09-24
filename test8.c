#include <stdio.h>



int main(void)

{
  
double loan_amounnt;
double interest_rate;
double monthly_payement;
double monthyl_interest_rate;
double remaining_blance;
printf("enter  loan amount:");
scanf("%lf",&loan_amounnt);
printf(" enter interest rate");
scanf("%lf",&interest_rate);
printf("enter  your monthyl payement :");
scanf("%lf",&monthly_payement);
monthyl_interest_rate=(interest_rate/100.0)/12.0;
remaining_blance=remaining_blance*(1.0+monthyl_interest_rate)-monthly_payement;
printf(" amount after first payementn :  %f\n", remaining_blance);
remaining_blance=remaining_blance*(1.0+monthyl_interest_rate)-monthly_payement;




printf(" amount after secend payementn : %f\n", remaining_blance);
remaining_blance=remaining_blance*(1.0+monthyl_interest_rate)-monthly_payement;printf(" amount after secend payementn .%$2f\n:", remaining_blance);

printf(" amount after third payementn :  %f\n", remaining_blance);







    
     return 0;

}