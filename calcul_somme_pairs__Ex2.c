#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int i;              // Variable de boucle
    int somme = 0;      // Variable pour stocker la somme des nombres pairs
    int borne_max;      // Variable pour stocker la borne maximale saisie par l'utilisateur
    int choix;          // Variable pour stocker le choix de l'utilisateur de recommencer ou non

    do
    { 
        // Boucle pour s'assurer que la borne maximale est entre 15 et 23 inclus
        do
        {
            printf("Saisir la borne max:");
            scanf("%d", &borne_max);
        }
        while (borne_max < 15 || borne_max > 23);

        somme = 0; // Réinitialise la somme pour chaque nouvelle itération

        // Boucle pour parcourir les entiers de 10 à borne_max inclus
        for(i = 10; i <= borne_max; i++)
        {
            if (i % 2 == 0) // Vérifie si l'entier courant est pair
            {
                printf("%d, ", i); // Affiche l'entier pair
                somme = somme + i; // Ajoute l'entier pair à la somme
            }
        }

        // Affiche la somme de tous les nombres pairs
        printf("\nLa somme de tous ces nombres est de: %d", somme);
        
        // Demande à l'utilisateur s'il veut recommencer
        printf("\nVoulez-vous recommencer? (OUI: 1, NON: 0) \n");
        scanf("%d", &choix);

    } while (choix == 1); // Répète la boucle si l'utilisateur entre 1 pour continuer

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
