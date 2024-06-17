#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

// Fonction pour afficher un message de saisie et lire un entier
int message(int x, int y, int numero)
{
    int variable; // Variable pour stocker l'entier saisi
    gotoXY(x, y); // Positionne le curseur à la position (x, y)
    printf("Veuillez-saisir l'entier numero %d: ", numero); // Affiche le message de saisie
    scanf("%d", &variable); // Lit l'entier saisi par l'utilisateur
    return variable; // Retourne l'entier saisi
}

int main(int argc, char const *argy[])
{
    int A[5], somme = 0; // Tableau pour stocker les 5 entiers et variable pour la somme initialisée à 0

    // Boucle pour demander la saisie des 5 entiers
    for (int i = 0; i < 5; i++)
    {
        A[i] = message(5, 5 + i, 1 + i); // Appelle la fonction message pour saisir chaque entier
        somme = somme + A[i]; // Ajoute l'entier saisi à la somme
    }

    // Affiche la somme des 5 entiers
    gotoXY(5, 11); // Positionne le curseur à la position (5, 11)
    printf("La somme des 5 entiers = %d", somme); // Affiche la somme des 5 entiers

    Sleep(5000); // Pause de 5 secondes avant de terminer le programme
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
