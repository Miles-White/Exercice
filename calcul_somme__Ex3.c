#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int a = 0, i;         // Variables pour stocker l'entrée de l'utilisateur et pour la boucle
    int somme = 0;        // Variable pour stocker la somme des nombres
    int produit = 1;      // Variable pour stocker le produit des nombres
    int choix;            // Variable pour stocker le choix de l'utilisateur de recommencer ou non

    do
    { 
        // Boucle pour s'assurer que l'utilisateur saisit un nombre strictement positif entre 5 et 10 inclus
        do
        {
            printf("Saisir un nombre strictement positif:");
            scanf("%d", &a);
        } while(a <= 4 || a >= 11);
        
        // Si le nombre saisi est pair
        if(a % 2 == 0)
        {
            // Boucle pour calculer le produit des nombres de 2 à a+1 inclus
            for(i = 2; i < a + 2; i = i + 1)
            {
                produit = produit * i;
            }
            printf("\nLe produit de ces nombres pairs est de: %d\n", produit);
        }
        // Si le nombre saisi est impair
        else
        {
            // Boucle pour calculer la somme des nombres de 1 à a+1 inclus
            for(i = 1; i < a + 2; i = i + 1)
            {
                somme = somme + i;
            }
            printf("\nLa somme de ces nombres impairs est de: %d\n", somme);
        }
        
        // Demande à l'utilisateur s'il veut recommencer
        printf("\nVoulez-vous recommencer? (OUI: 1, NON: 0) \n");
        scanf("%d", &choix);

        // Réinitialisation des variables pour la prochaine itération
        a = 0;
        somme = 0;
        produit = 1;
    } while(choix == 1); // Répète la boucle si l'utilisateur entre 1 pour continuer

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
