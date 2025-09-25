
#include <stdbool.h>

#include <stdio.h>

int main(void)

{
bool digit_seen[10] = {false};      
    bool digit_repeated[10] = {false};
    long n;

    printf("Entrez un nombre: ");
    scanf("%ld", &n);

    char str[20];
    sprintf(str, "%ld", n); 

    
    for (int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';  
        if (digit_seen[digit]) {
            digit_repeated[digit] = true; 
        } else {
            digit_seen[digit] = true;     
        }
    }


    printf("Chiffres repets : ");
    bool any = false;
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            printf("%d ", i);
            any = true;
        }
    }

    if (!any) {
        printf("Aucun");
    }

    printf("\n");
    return 0;
}

