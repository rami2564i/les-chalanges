#include <stdio.h>
int main(void)

{
int nomber,diz,unit,inv;
printf("enter  your  number : ");
scanf("%d", &nomber);
diz= nomber/10;
unit=nomber%10;
inv= unit*10+diz;
printf(" inverse nomber est: %d\n", inv);

return 0;



}