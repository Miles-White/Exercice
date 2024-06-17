#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a, b, c = 1;        // Déclaration des variables globales

int main()
{
    // Boucle pour s'assurer que l'utilisateur saisit un nombre supérieur à 1000
    do
    {
        printf("Saisir un nombre supérieur à 1000: ");
        scanf("%d", &a);
    }
    while(a < 1000);

    // Boucle principale pour demander des nombres à multiplier jusqu'à ce que le produit dépasse 'a'
    do
    {
        // Boucle pour s'assurer que l'utilisateur saisit un nombre positif
        do
        {
            printf("Saisir un nombre: ");
            scanf("%d", &b);
        } while (b < 1);

        // Calcul du produit des nombres saisis
        c = c * b;
        printf("Produit total: %d\n", c);

    } while (c <= a);   // Répète la boucle tant que le produit est inférieur ou égal à 'a'

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
