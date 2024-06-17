#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int i;              // Variable de boucle
    int somme = 0;      // Variable pour stocker la somme des nombres pairs
    int borne_max;      // Variable pour stocker la borne maximale saisie par l'utilisateur

    // Demande à l'utilisateur de saisir la borne maximale
    printf("Saisir la borne max: ");
    scanf("%d", &borne_max);

    // Boucle pour parcourir les entiers de 10 à borne_max inclus
    for (i = 10; i <= borne_max; i++)
    {
        // Vérifie si l'entier courant est pair
        if (i % 2 == 0)
        {
            printf("%d, ", i); // Affiche l'entier pair
            somme = somme + i; // Ajoute l'entier pair à la somme
        }
    }

    // Affiche la somme de tous les nombres pairs
    printf("\nLa somme de tous ces nombres pairs est de: %d", somme);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
