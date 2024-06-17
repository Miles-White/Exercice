#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console

int main(int argc, char const *argv[])
{
    int A, B, Somme;  // Variables d'entrée A et B, variable de sortie Somme

    // Saisie des valeurs de A et B
    printf("Veuillez saisir A: ");
    scanf("%d", &A);
    printf("Veuillez saisir B: ");
    scanf("%d", &B);

    // Calcul de la somme de A et B
    Somme = A + B;

    // Affichage du résultat de la somme
    printf("Résultat de la somme de %d et %d = %d\n", A, B, Somme);
   
    int C, D, Produit;  // Variables d'entrée C et D, variable de sortie Produit

    // Saisie des valeurs de C et D
    printf("\nVeuillez saisir C: ");
    scanf("%d", &C);
    printf("Veuillez saisir D: ");
    scanf("%d", &D);

    // Calcul du produit de C et D
    Produit = C * D;

    // Affichage du résultat du produit
    printf("Résultat du produit de %d et %d = %d\n", C, D, Produit);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
