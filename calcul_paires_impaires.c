#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main(int argc, char const *argy[])
{
    // Déclaration des variables
    int A, B, pdt = 1, somme_pair = 0, somme_impair = 0;

    // Demande à l'utilisateur de saisir le premier entier
    printf("\nSaisir du 1 nombre entier: ");
    scanf("%d", &A);

    // Demande à l'utilisateur de saisir le deuxième entier
    printf("\nSaisie du 2eme nombre entier: ");
    scanf("%d", &B);

    // Boucle pour parcourir tous les entiers de A à B-1
    for (int i = A; i < B; i++)
    {
        if (i % 2 == 0) // Si i est pair
        {
            pdt = pdt * i; // Multiplie pdt par i
            somme_pair = somme_pair + i; // Ajoute i à somme_pair
        }
        else // Si i est impair
        {
            somme_impair = somme_impair + i; // Ajoute i à somme_impair
        }
    }

    // Affiche le produit des nombres pairs entre A et B
    printf("\nLe produit des nombres pairs entre %d et %d, est: %d\n", A, B, pdt);
    // Affiche la somme des nombres impairs entre A et B
    printf("La somme des nombres impairs entre %d et %d, est: %d\n", A, B, somme_impair);
    // Affiche la somme des nombres pairs entre A et B
    printf("La somme des nombres pairs entre %d et %d, est: %d", A, B, somme_pair);   

    // Pause de 50 secondes avant de terminer le programme
    Sleep(50000);
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
