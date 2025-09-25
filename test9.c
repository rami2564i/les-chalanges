#include <stdio.h>
#include <string.h>


int main(void)

{
    char isbn[20];
    printf("enter your isbn: ");
    scanf("%s", isbn);
    char *token= strtok(isbn,"-");
    int part=1;
    while (token!= NULL)
    {
        switch (part)
        {
        case 1:
            printf("Prefixe gsi %s\n", token);
            break;        
        case 2:
            printf("Identifient de groupe: %s\n", token);
            break;
        case 3:
            printf("code de lediteur %s\n", token);
            break;
        case 4:
            printf("numero d article  %s\n", token); 
            break;      
         case 5:
            printf("chefer de conrole  %s\n", token);
            break;


            
        


        

        }
        token=strtok(NULL,"-");
        part++;
    }
    return 0;
    


}