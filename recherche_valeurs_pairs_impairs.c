#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int saisie[10], tampon2 = 0, tampon1 = 0;

    // Boucle pour saisir 10 nombres consécutivement
    for(int i = 0; i < 10; i++)
    {
        printf("Veuillez saisir un nombre: ");
        scanf("%d", &saisie[i]);
    }

    // Initialisation des tampons avec la première valeur saisie
    tampon1 = saisie[0];
    tampon2 = saisie[0];

    // Boucle pour trouver les valeurs spécifiées
    for(int j = 0; j < 10; j++)
    {
        // Recherche de la valeur la plus grande paire
        if(tampon1 <= saisie[j] && saisie[j] % 2 == 0)
        {
            tampon1 = saisie[j];
        }
        // Recherche de la valeur la plus petite impaire
        if(tampon2 >= saisie[j] && saisie[j] % 2 != 0)
        {
            tampon2 = saisie[j];
        }
    }

    // Affichage de la plus grande valeur paire trouvée
    if(tampon1 % 2 == 0)
    {
        printf("Le nombre le plus grand pair est: %d\n", tampon1);
    }
    else
    {
        printf("Il n'y a pas de nombre pair.\n");
    }

    // Affichage de la plus petite valeur impaire trouvée
    if(tampon2 % 2 != 0)
    {
        printf("Le plus petit nombre impair est: %d\n", tampon2);
    }
    else
    {
        printf("Il n'y a pas de nombre impair.\n");
    }

    sleep(50); // Pause de 50 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
