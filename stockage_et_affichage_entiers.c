#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a[100];             // Tableau pour stocker jusqu'à 100 entiers
int b = 0, c = 0;       // Variables globales pour le comptage

int main()
{
    // Boucle pour demander à l'utilisateur de saisir des entiers
    for (int j = 0; j < 100; j++)
    {
        printf("Saisir un entier: ");
        scanf("%d", &a[j]); // Lire l'entier saisi et le stocker dans le tableau

        c = c + 1; // Incrémenter le compteur d'éléments saisis

        // Vérifier si l'entier saisi est 50
        if (a[j] == 50)
        {
            j = 100; // Terminer la boucle en définissant j à 100
        }
    }

    c = c - 1; // Ajuster le compteur pour exclure l'entier 50

    // Boucle pour afficher tous les entiers saisis avant 50
    for (int i = 0; i < c; i++)
    {
        printf("%d\n", a[i]);
    }

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourner 0 pour indiquer que le programme s'est terminé correctement
}
