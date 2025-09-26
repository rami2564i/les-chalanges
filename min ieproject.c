#include <stdio.h>
#include <string.h>

#define Max_students 30  
#define NB_NOTES 3         

typedef struct {
    int id;                 
    char nom[50];            
    char prenom[50];         
    float notes[NB_NOTES];    
    float moyenne;          
} student;


void ajouterstudent(student students[], int *nb) {
    if (*nb >= Max_students) {
        printf(" namber of students it is max: \n");
        
        return;
    }

    student e;
    printf("\n--- add new student ---\n");
    
    printf(" enter your ID: ");
    scanf("%d", &e.id);

    printf("  what is your  name : ");
    scanf("%s", e.nom);

    printf("ente ryour familly name : ");
    scanf("%s", e.prenom);

    float somme = 0;
    for (int i = 0; i < NB_NOTES; i++) {
        printf("Note %d: ", i + 1);
        scanf("%f", &e.notes[i]);
        somme += e.notes[i];
    }

    e.moyenne = somme / NB_NOTES;

    students[*nb] = e; 
    (*nb)++;             

    printf(" hey  the new student \n");
}


void afficherstudents(student students[], int nb) {
    if (nb == 0) {
        printf(" we dont have any student yet !!\n");
        return;
    }

    printf("\n--- Liste des étudiants ---\n");
    for (int i = 0; i < nb; i++) {
        printf("ID: %d | Nam: %s | familly name: %s | Notes: ", 
                students[i].id, students[i].nom, students[i].prenom);
        for (int j = 0; j < NB_NOTES; j++) {
            printf("%.2f ", students[i].notes[j]);}
        printf("| Moyenne: %.2f\n", students[i].moyenne);
    }
}


float moyenneGenerale(student students[], int nb) {
    if (nb == 0) return 0;
    float somme = 0;
    for (int i = 0; i < nb; i++) {
        somme += students[i].moyenne;
    }
    return somme / nb;
}


void afficherBulletin(student students[], int nb, int idRecherche) {
    for (int i = 0; i < nb; i++) {
        if (students[i].id == idRecherche) {
            printf("\n--- Bulletin de %s %s ---\n", students[i].nom, students[i].prenom);
            for (int j = 0; j < NB_NOTES; j++) {
                printf("Note %d: %.2f\n", j + 1, students[i].notes[j]);
            }
            printf("Moyenne: %.2f\n", students[i].moyenne);
            return;
        }
    }
    printf(" enter your  idstedent %d.\n", idRecherche);
}


int main() {
    student students[Max_students];
    int nb = 0;
    int choix;

    do {
        printf("\n--- Gestion des étudiants ---\n");
        printf("1. add new student\n");
        printf("2.  show all students \n");
        printf("3.  show one student\n");
        printf("4. Afficher moyenne generel\n");
        printf("0. exit \n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {case 1:
                ajouterstudent(students, &nb);
                break;
            case 2:
                afficherstudents(students, nb);
                break;
            case 3: {
                int idRecherche;
                printf("ente student id : ");
                scanf("%d", &idRecherche);
                afficherBulletin(students, nb, idRecherche);
                break;
            }
            case 4:
                printf("Moyenne generale de la classe: %.2f\n", moyenneGenerale(students, nb));
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf(" Choix invalide. reesayer .\n");
        }

    } while (choix != 0);

    return 0;
    


    }


