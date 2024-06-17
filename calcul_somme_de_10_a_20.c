#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int i;              // Variable de boucle
    int somme = 0;      // Variable pour stocker la somme des entiers de 10 à 20

    // Boucle pour parcourir les entiers de 10 à 20
    for(i = 10; i < 21; i = i + 1)
    {
        printf("%d ", i); // Affiche l'entier courant
        somme = somme + i; // Ajoute l'entier courant à la somme
    }

    // Affiche la somme des entiers de 10 à 20
    printf("\nLa somme des entiers de 10 à 20 est: %d\n", somme);

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
