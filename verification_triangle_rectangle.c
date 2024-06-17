#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique pour la fonction sqrt

// Déclaration des variables globales pour les coordonnées et les longueurs des côtés
int xa, xb, xc, ya, yb, yc;
int AB, AC, BC;
int resulta;

int main()
{
    // Saisie des coordonnées du point A
    printf("Veuillez saisir les coordonnées du point A:\n");
    printf("x = ");
    scanf("%d", &xa);
    printf("y = ");
    scanf("%d", &ya);

    // Saisie des coordonnées du point B
    printf("Veuillez saisir les coordonnées du point B:\n");
    printf("x = ");
    scanf("%d", &xb);
    printf("y = ");
    scanf("%d", &yb);

    // Saisie des coordonnées du point C
    printf("Veuillez saisir les coordonnées du point C:\n");
    printf("x = ");
    scanf("%d", &xc);
    printf("y = ");
    scanf("%d", &yc);

    // Calcul des longueurs des côtés du triangle
    AB = sqrt(((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));
    AC = sqrt(((xc - xa) * (xc - xa)) + ((yc - ya) * (yc - ya)));
    BC = sqrt(((xb - xc) * (xb - xc)) + ((yb - yc) * (yb - yc)));

    // Affichage des longueurs des côtés
    printf("Longueur AB = %d\n", AB);
    printf("Longueur AC = %d\n", AC);
    printf("Longueur BC = %d\n", BC);

    // Vérification si le triangle est rectangle
    if (AB + AC - BC == 0 || AC + BC - AB == 0 || BC + AB - AC == 0)
    {
        printf("Le triangle n'est pas rectangle.\n");
    }
    else
    {
        // Détermination du plus long côté du triangle
        resulta = AB;
        if (AC > resulta)
        {
            resulta = AC;
        }
        if (BC > resulta)
        {
            resulta = BC;
        }

        // Identification de l'angle droit
        if (BC == resulta)
        {
            printf("Le triangle est rectangle en A.\n");
        }
        if (AC == resulta)
        {
            printf("Le triangle est rectangle en B.\n");
        }
        if (AB == resulta)
        {
            printf("Le triangle est rectangle en C.\n");
        }
    }

    sleep(50); // Pause de 50 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
