#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console

int main(int argc, char const *argv[])
{
    int i = 0;                          // Variable pour les boucles de validation
    int nbr_porte = 0;                  // Nombre de portes
    int nbr_fenetre = 0;                // Nombre de fenêtres
    float lon_piece = 0;                // Longueur de la pièce
    float lar_piece = 0;                // Largeur de la pièce
    float hau_piece = 0;                // Hauteur de la pièce
    float lon_porte = 0;                // Longueur des portes
    float hau_porte = 0;                // Hauteur des portes
    float lon_fenetre = 0;              // Longueur des fenêtres
    float hau_fenetre = 0;              // Hauteur des fenêtres
    float Surface_total = 0;            // Surface totale à peindre
    float Surface_mur1 = 0;             // Surface des murs de longueur
    float Surface_mur2 = 0;             // Surface des murs de largeur
    float Surface_porte = 0;            // Surface des portes
    float Surface_fenetre = 0;          // Surface des fenêtres
    int nbr_rouleaux = 0;               // Nombre de rouleaux nécessaires
    int dim_rouleaux = 5;               // Dimension d'un rouleau en m2

    // Saisie de la longueur de la pièce avec validation
    printf("Veuiller saisir la longueur de votre pièce: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &lon_piece);
    } 
    while(lon_piece < 0);
    i = 0;

    // Saisie de la largeur de la pièce avec validation
    printf("Veuiller saisir la largeur de la pièce: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &lar_piece);
    } 
    while(lar_piece < 0);
    i = 0;

    // Saisie de la hauteur de la pièce avec validation
    printf("Veuiller saisir la hauteur de la pièce: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &hau_piece);
    } 
    while(hau_piece < 0);
    i = 0;

    // Saisie du nombre de portes avec validation
    printf("Veuiller saisir le nombre de portes dans votre pièce: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%d", &nbr_porte);
    } 
    while(nbr_porte < 0);
    i = 0;

    // Saisie du nombre de fenêtres avec validation
    printf("Veuiller saisir le nombre de fenêtres dans votre pièce: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%d", &nbr_fenetre);
    } 
    while(nbr_fenetre < 0);
    i = 0;

    // Saisie de la longueur des portes avec validation
    printf("Veuiller saisir la longueur des portes: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &lon_porte);
    } 
    while(lon_porte < 0);
    i = 0;

    // Saisie de la hauteur des portes avec validation
    printf("Veuiller saisir la hauteur des portes: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &hau_porte);
    } 
    while(hau_porte < 0);
    i = 0;

    // Saisie de la longueur des fenêtres avec validation
    printf("Veuiller saisir la longueur des fenêtres: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &lon_fenetre);
    } 
    while(lon_fenetre < 0);
    i = 0;

    // Saisie de la hauteur des fenêtres avec validation
    printf("Veuiller saisir la hauteur des fenêtres: ");
    do
    {
        if (i > 0)
        {
            printf("Vous avez saisi un nombre négatif. Veuillez refaire votre saisie: ");
        }
        i++;
        scanf("%f", &hau_fenetre);
    } 
    while(hau_fenetre < 0);
    
    // Calcul des surfaces
    Surface_mur1 = (lon_piece * hau_piece) * 2;
    Surface_mur2 = (lar_piece * hau_piece) * 2;
    Surface_porte = lon_porte * hau_porte * nbr_porte;
    Surface_fenetre = lon_fenetre * hau_fenetre * nbr_fenetre;
    Surface_total = Surface_mur1 + Surface_mur2 - Surface_porte - Surface_fenetre;

    // Affichage de la surface totale à peindre
    printf("La surface totale de vos murs à recouvrir est de %.2f m2\n", Surface_total);

    // Calcul et affichage du nombre de rouleaux nécessaires
    nbr_rouleaux = Surface_total / dim_rouleaux;
    printf("\nPour entièrement recouvrir tous vos murs, il vous faudra %d rouleaux.\n", (int)ceil(nbr_rouleaux));

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
