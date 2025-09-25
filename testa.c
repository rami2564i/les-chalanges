#include <stdio.h>
#include <string.h>


int main(void)

{
    char isbn[20];
    char part[5][20];
    int i =0, j=0, k=0;


    printf("enter your isbn: ");
    scanf("%s", isbn);
    
    while (isbn[i]   != '\0')
    {
        if (isbn[i]=='-' )  
        {       
            part[j][k]='\0';
            j++;
            k=0;




        }
        else{
             part[j][k]=isbn[i];
             k++;

        }
        i++;
 
      
    


} 
part[j][k]='\0';

printf("Prefixe gsi %s\n", part[0]);
 printf("Identifient de groupe: %s\n", part[1]);
 printf("code de lediteur %s\n", part[2]);  
 printf("numero d article  %s\n",part[3]);  
  printf("chefer de conrole  %s\n", part[4]);







  return 0;


    }