#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int tab[10];        // Tableau pour stocker les 10 nombres saisis par l'utilisateur
    int test = 0;       // Variable pour stocker le nombre temporaire saisi par l'utilisateur
    int a = 0;          // Variable pour indiquer si un doublon a été trouvé

    // Boucle pour saisir 10 nombres uniques
    for(int i = 0; i < 10; i++)
    {
        do
        {
            a = 0;      // Réinitialiser la variable 'a' à 0 avant chaque nouvelle saisie
            printf("Saisir un nombre: ");
            scanf("%d", &test);

            // Vérifier si le nombre saisi est un doublon
            for(int j = 0; j < 10; j++)
            {
                if(test == tab[j])
                {
                    a = 1; // Indiquer qu'un doublon a été trouvé
                    printf("Vous avez saisi un doublon!\n");
                }
            }
        } while (a == 1); // Répéter la saisie si un doublon est trouvé

        tab[i] = test; // Stocker le nombre dans le tableau
    }

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
