#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique pour les fonctions pow

// Déclaration des variables globales
int a, b, c;
int xd, xe, xf, yd, ye, yf;
int xa, xb, xc, ya, yb, yc;
int m, n, o;

int main()
{
    // Demande à l'utilisateur de saisir les coordonnées du point A
    printf("Veuillez saisir les coordonées du point A:\n");
    printf("x= ");
    scanf("%d", &xa); // Correction pour passer l'adresse de xa
    printf("y= ");
    scanf("%d", &ya); // Correction pour passer l'adresse de ya

    // Demande à l'utilisateur de saisir les coordonnées du point B
    printf("Veuillez saisir les coordonées du point B:\n");
    printf("x= ");
    scanf("%d", &xb); // Correction pour passer l'adresse de xb
    printf("y= ");
    scanf("%d", &yb); // Correction pour passer l'adresse de yb

    // Demande à l'utilisateur de saisir les coordonnées du point C
    printf("Veuillez saisir les coordonées du point C:\n");
    printf("x= ");
    scanf("%d", &xc); // Correction pour passer l'adresse de xc
    printf("y= ");
    scanf("%d", &yc); // Correction pour passer l'adresse de yc

    // Calcul des différences de coordonnées entre les points
    xf = xa - xb;
    yf = ya - yb;
    xd = xb - xb;
    yd = yb - yb;
    xe = xc - xa;
    ye = yc - ya;

    // Calcul des carrés des distances
    m = pow((xf + yf), 2) + pow((xd + yd), 2);
    n = pow((xe + ye), 2);

    // Affichage des résultats
    printf("Cote f + cote d = %d\n", m);
    printf("Cote e = %d\n", n);

    // Pause de 50 secondes avant de terminer le programme
    sleep(50);

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
