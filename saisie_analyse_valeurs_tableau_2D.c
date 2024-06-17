#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int saisie[3][4], tampon2 = 0, tampon1 = 0, somme = 0;

    // Boucle pour saisir les valeurs du tableau 2D
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            // Saisie des valeurs pour 3 lignes et 4 colonnes
            printf("Veuillez saisir un nombre: ");
            scanf("%d", &saisie[i][j]);

            // Initialisation des variables tampon
            if(j == 0)
            {
                tampon1 = saisie[i][0];
                tampon2 = saisie[i][0]; 
            }

            // Recherche de la valeur la plus grande
            if(tampon1 < saisie[i][j])
            {
                tampon1 = saisie[i][j];
            }

            // Recherche de la valeur la plus petite
            if(tampon2 > saisie[i][j])  
            {
                tampon2 = saisie[i][j];
            }

            // Calcul de la somme des valeurs
            somme = somme + saisie[i][j];
        }

        // Affichage des valeurs, de la valeur la plus petite, de la valeur la plus grande et de la somme
        printf("\n%d\t%d\t%d\t%d\tPG= %d\tPP= %d\tSomme= %d \n\n", saisie[i][0], saisie[i][1], saisie[i][2], saisie[i][3], tampon1, tampon2, somme);
        
        // Réinitialisation des tampons et de la somme pour la prochaine ligne
        tampon1 = 0;
        tampon2 = 0;
        somme = 0;
    }

    sleep(50); // Pause de 50 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
