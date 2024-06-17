#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a, b, c, d;         // Déclaration des variables globales
int choix = 0;          // Variable pour stocker le choix de l'utilisateur de recommencer ou non

int main()
{
    do
    {
        // Demande à l'utilisateur de saisir un nombre A
        printf("Saisir un nombre A: ");
        scanf("%d", &a);

        // Boucle pour s'assurer que l'utilisateur saisit un nombre B plus grand que A
        do
        {
            printf("Saisir un nombre B plus grand que A: ");
            scanf("%d", &b);
        } while (b < a);

        // Calcul de la somme et de la différence des nombres A et B
        c = a + b;
        d = b - a;

        // Affichage de la somme de A et B
        printf("La somme de A et B est: %d\n", c);

        // Filtrage et affichage des nombres selon la somme c
        if (c > 10 && c < 20)
        {
            // Affiche les nombres pairs entre A et B inclus
            for(int i = a; i <= b; i++)
            {
                if (i % 2 == 0)
                {
                    printf("%d\t", i);
                }
            }
        }
        else if (c > 21 && c < 30)
        {
            // Affiche les nombres impairs entre A et B inclus
            for(int i = a; i <= b; i++)
            {
                if (i % 2 == 1)
                {
                    printf("%d\t", i);
                }
            }
        }
        else if (c > 31 && c < 40)
        {
            // Affiche les nombres divisibles par 3 entre A et B inclus
            for(int i = a; i <= b; i++)
            {
                if (i % 3 == 0)
                {
                    printf("%d\t", i);
                }
            }
        }
        else
        {
            // Indique qu'il n'y a pas de solutions pour les autres cas
            printf("Pas de solutions.\n");
        }
        
        // Demande à l'utilisateur s'il veut recommencer
        printf("\nVoulez-vous recommencer OUI(1) ou NON (0): ");
        scanf("%d", &choix);

    } while(choix == 1); // Répète la boucle si l'utilisateur entre 1 pour continuer

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
