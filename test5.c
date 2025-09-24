#include <stdio.h>
#include <math.h>



int main(void)

{
  
    double x ;
    double polynomail_value;
     printf("enter  a value for x:  ");
     scanf("%lf", &x);
     polynomail_value=((((3*x +2) * x-5)*x-1)*x+7)*x-6;
     printf("the value of the polynomail value is :%f\n" , polynomail_value);




    
     return 0;

}