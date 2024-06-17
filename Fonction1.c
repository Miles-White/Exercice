#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main(int argc, char const *argy[])
{
    // Déclaration des variables pour stocker les entiers et leur somme
    int A, B, C, D, E, somme;
    
    // Utilisation de gotoXY pour positionner le curseur et demander la saisie du premier entier
    gotoXY(5, 5);
    printf("Veuillez-saisir l'entier numero 1: ");
    scanf("%d", &A);
    
    // Demande la saisie du deuxième entier
    gotoXY(5, 6);
    printf("Veuillez-saisir l'entier numero 2: ");
    scanf("%d", &B);

    // Demande la saisie du troisième entier
    gotoXY(5, 7);
    printf("Veuillez-saisir l'entier numero 3: ");
    scanf("%d", &C);

    // Demande la saisie du quatrième entier
    gotoXY(5, 8);
    printf("Veuillez-saisir l'entier numero 4: ");
    scanf("%d", &D);

    // Demande la saisie du cinquième entier
    gotoXY(5, 9);
    printf("Veuillez-saisir l'entier numero 5: ");
    scanf("%d", &E);

    // Calcul de la somme des cinq entiers
    somme = A + B + C + D + E;

    // Affiche la somme des cinq entiers
    gotoXY(5, 11);
    printf("La somme des 5 entiers = %d", somme);

    // Pause de 5 secondes avant de terminer le programme
    Sleep(5000);
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
