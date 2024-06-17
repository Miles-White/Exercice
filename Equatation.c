#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep 
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console 
#include <math.h>       // Bibliothèque mathématique pour les fonctions sqrt

int main()
{
    // Déclaration des variables pour les coefficients de l'équation quadratique et les résultats
    float a, b, c;       // Coefficients de l'équation quadratique ax^2 + bx + c
    float delta;         // Discriminant de l'équation quadratique
    float x1, x2;        // Racines de l'équation quadratique
    int choix;           // Variable pour stocker le choix de l'utilisateur de continuer ou non

    do
    {
        // Demande à l'utilisateur de saisir les valeurs de a, b et c
        printf("Saisir la valeur de a: ");
        scanf("%f", &a);
        printf("Saisir la valeur de b: ");
        scanf("%f", &b);
        printf("Saisir la valeur de c: ");
        scanf("%f", &c);

        // Calcul du discriminant delta
        delta = (b * b) - (4 * a * c);
        printf("Delta: %f \n", delta);

        // Cas où delta est positif (deux racines réelles)
        if (delta > 0)
        {
            printf("Delta est positif.\n");
            x1 = ((-b - sqrt(delta)) / (2 * a));
            x2 = ((-b + sqrt(delta)) / (2 * a));
            printf("1ère racine: %f\n", x1);
            printf("2ème racine: %f\n", x2);
            printf("%fx^2 + %fx + %f =  %f %f\n", a, b, c, x1, x2);
        }
        // Cas où delta est nul (une racine réelle double)
        if (delta == 0)
        {
            printf("Delta est nul. Une seule racine double.\n");
            x1 = -b / (2 * a);
            printf("x = %f\n", x1);
        }
        // Cas où delta est négatif (pas de racines réelles)
        if (delta < 0)
        {
            printf("Delta est négatif.\n");
            x1 = -b / (2 * a);
            printf("x = %f + %fi\n", x1, sqrt(-delta) / (2 * a)); // Affichage de la partie réelle et imaginaire
        }

        // Demande à l'utilisateur s'il veut recommencer
        printf("Voulez-vous recommencer? (OUI: 1, NON: 0) \n");
        scanf("%d", &choix);
    } while (choix == 1); // Répète la boucle si l'utilisateur entre 1 pour continuer

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
