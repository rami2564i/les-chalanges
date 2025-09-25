#include <stdio.h>
int main(void)

{
int n,m ,rest;
printf(" eneter your first number:");
scanf("%d",&n);
printf("enter your scend number: ");
scanf("%d",&m);
while (n!=0)
{
    rest=m%n;
    m=n;
    n = rest;
}
printf(" CGD est: %d\n", m);



}