#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int choix, quitter = 0; // Variables pour stocker le choix de l'utilisateur et l'indicateur de sortie

    // Définition de la structure pour les informations de la personne
    struct modele_fiche_personne
    {
        char nom[20];      // Nom de la personne
        char prenom[20];   // Prénom de la personne
        int age;           // Âge de la personne
    };

    struct modele_fiche_personne fiche_personne; // Variable pour stocker les informations de la personne

    do
    {
        // Affichage du menu
        printf("---------------------------------------------------\n");
        printf("1: Saisie d'une nouvelle fiche d'etat civil\n");
        printf("2: Visualisation d'une fiche d'etat civil\n");
        printf("3: Modification de l'une des donnees\n");
        printf("4: Quitter\n");
        printf("---------------------------------------------------\n\n");
        printf("Quel est votre choix? ");
        scanf("%d", &choix);  // Lecture du choix de l'utilisateur

        // Gestion des choix de l'utilisateur
        switch (choix)
        {
            case 1: // Saisie d'une nouvelle fiche d'état civil
            {
                printf("\n");
                printf("Nom de la personne: ");
                scanf("%s", fiche_personne.nom); // Lecture du nom

                printf("\n");
                printf("Prenom de la personne: ");
                scanf("%s", fiche_personne.prenom); // Lecture du prénom

                printf("\n");
                printf("Age de la personne: ");
                scanf("%d", &fiche_personne.age); // Lecture de l'âge
                break;
            }

            case 2: // Visualisation des données saisies
            {
                printf("\n");
                printf("Nom de la personne : %s", fiche_personne.nom); // Affichage du nom

                printf("\n");
                printf("Prenom de la personne : %s", fiche_personne.prenom); // Affichage du prénom

                printf("\n");
                printf("Age de la personne : %d", fiche_personne.age); // Affichage de l'âge
                printf("\n");
                Sleep(500); // Pause de 500 millisecondes
                break;
            }

            case 3: // Modification des données (à implémenter)
            {
                // Code pour la modification des données non implémenté
                break;
            }

            case 4: // Quitter le programme
            {
                quitter = 1; // Mettre l'indicateur de sortie à 1 pour terminer la boucle
                break;
            }

            default:
            {
                printf("Choix invalide. Veuillez reessayer.\n"); // Message en cas de choix invalide
                break;
            }
        }
    }
    while (quitter == 0); // Répète la boucle tant que quitter est 0

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
