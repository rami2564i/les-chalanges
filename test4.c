#include <stdio.h>
#include <math.h>



int main(void)

{
  
    double x ;
    double polynomail_value;
     printf("enter  a value for x:  ");
     scanf("%lf", &x);
     polynomail_value=3* pow(x ,5)+ 2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
     printf("the value of the polynomail value is :%f\n" , polynomail_value);




    
     return 0;

}