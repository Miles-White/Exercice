#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a, b, c, d, e = 1;  // Déclaration des variables globales
int choix = 0;          // Variable pour stocker le choix de l'utilisateur

int main()
{
    // Boucle pour s'assurer que l'utilisateur saisit un nombre B plus grand que A
    do
    {
        printf("Saisir un nombre A: ");
        scanf("%d", &a);
        printf("Saisir un nombre B plus grand que A: ");
        scanf("%d", &b);
    } while (b < a);

    // Boucle principale pour afficher le menu et effectuer les opérations choisies
    do
    {
        // Calcul de la somme et de la différence des nombres A et B
        c = a + b;
        d = b - a;

        // Affichage du menu
        printf("1 - Appel de la fonction FCT1\n\n");
        printf("2 - Appel de la fonction FCT2\n\n");
        printf("3 - Appel de la fonction FCT3\n\n");
        printf("4 - Quitter le programme\n\n");
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);

        // Exécution des opérations en fonction du choix de l'utilisateur
        switch (choix)
        {
            case 1:
            {
                // Calcul du produit des nombres impairs entre A et B inclus
                for(int i = a; i < b + 1; i++)
                {
                    if (i % 2 == 1)
                    {
                        e = e * i;
                    }
                }
                printf("%d\n", e);
                break;
            }
            case 2:
            {
                // Calcul du produit des nombres pairs entre A et B inclus
                for(int i = a; i < b + 1; i++)
                {
                    if (i % 2 == 0)
                    {
                        e = e * i;
                    }
                }
                printf("%d\n", e);
                break;
            }   
            case 3:
            {
                // Calcul de la somme des multiples de 3 entre A et B inclus
                for(int i = a; i < b + 1; i++)
                {
                    if (i % 3 == 0)
                    {
                        e = e + i;
                    }
                }
                printf("%d\n", e);
                break;
            }
            case 4:
            {
                // Quitter le programme
                choix = 1;
                break;
            }
        }
    } while(choix != 1);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
