#include <stdio.h>
int main(void)

{
    int grade;
printf("enter your grade betwin 0-100 :");
scanf("%d",&grade);
if( grade<0 || grade>100){
    printf(" the grade should be betwin 0 and 100!!  \n");
}
else{
    switch (grade/10)
    {
    case 10:
    case 9:
    printf(" congralation your grade is A\n ");

       
        break;
    case 8:
    printf(" congralation your grade is B\n ");
    break;
    case 7:
    printf(" congralation your grade is c\n ");
    break ; 
     case 6:
    printf(" coode your grade is D\n ");
    break;
    
    



    
    default:
    printf("  try smart your grade is F\n ");

    
        break;
    }
}


}