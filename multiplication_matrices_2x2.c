#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    // Initialisation des matrices
    int A[2][2], B[2][2], C[2][2];

    // Saisie de la 1ère matrice
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Saisir la valeur %d de la matrice 1: ", j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n---------------------------------------------\n\n");

    // Saisie de la 2ème matrice
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Saisir la valeur %d de la matrice 2: ", j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Calcul et affichage de la matrice résultante de la multiplication
    for(int k = 0; k < 2; k++)
    {
        for(int l = 0; l < 2; l++)
        {
            // Calcul de chaque élément de la matrice C
            C[k][l] = A[k][0] * B[0][l] + A[k][1] * B[1][l];
            printf("%d ", C[k][l]);
        }
        printf("\n");
    }

    sleep(50); // Pause de 50 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
