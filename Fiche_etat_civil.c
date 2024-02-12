#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int choix,quitter=0;

    //Model de la structure
    struct modele_fiche_personne
    {
        char nom[20];
        char prenom[20];
        int age;
    };

    struct modele_fiche_personne fiche_personne;

    do
    {
        printf("---------------------------------------------------\n");
        printf("1: Saisie d'une nouvelle fiche d'etat civil\n");
        printf("2: Visualisation d'une fiche d'etat civil\n");
        printf("3: Modification de l'une des donnees\n");
        printf("4: Quitter\n");
        printf("---------------------------------------------------\n\n");
        printf("Quel est votre choix? ");
        scanf("%d", &choix);  
        switch (choix)
        {
            case 1:
            {
                printf("\n");
                printf("Nom de la personne: ");
                scanf("%s", &fiche_personne.nom);

                printf("\n");
                printf("Prenom de la personne: ");
                scanf("%s", &fiche_personne.prenom);

                printf("\n");
                printf("Age de la personne: ");
                scanf("%d", &fiche_personne.age);
                break;
                
                
            }

            case 2:
            {
                //Visualisation des donnees saisies

                printf("\n");
                printf("Nom de la personne : %s", fiche_personne.nom);

                printf("\n");
                printf("Prenom de la personne : %s", fiche_personne.prenom);

                printf("\n");
                printf("Age de la personne : %d", fiche_personne.age);
                printf("\n");
                Sleep(500);
                break;

        
                
            }

            case 3:
            {

            }

            case 4:
            {
                quitter =  1;
                break;
            }
        
        
        }


    

    }
    while(quitter == 0);
    return 0;
}