#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int tab[10];        // Tableau pour stocker les 10 nombres saisis par l'utilisateur
    int tampon1;        // Variable temporaire pour l'échange des valeurs lors du tri

    // Boucle pour saisir 10 nombres et les trier par insertion
    for(int i = 0; i < 10; i++)
    {
        // Demande à l'utilisateur de saisir un nombre
        printf("Saisir un nombre: ");
        scanf("%d", &tab[i]);

        // Tri par insertion
        for(int k = i; k > 0 && tab[k] < tab[k - 1]; k--)
        {
            tampon1 = tab[k];      // Échange des valeurs si l'élément courant est inférieur à l'élément précédent
            tab[k] = tab[k - 1];
            tab[k - 1] = tampon1;
        }

        // Affichage de l'état actuel du tableau après chaque insertion
        for(int j = 0; j < i + 1; j++)
        {
            printf("%d\t", tab[j]);
        }
        printf("\n");
    }

    sleep(50); // Pause de 50 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
