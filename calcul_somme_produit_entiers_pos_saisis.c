#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a[10], b = 0, c, d = 0; // Déclaration des variables globales

int main()
{
    c = 1; // Initialisation de la variable c pour le produit des nombres impairs

    // Boucle pour demander à l'utilisateur de saisir 10 nombres positifs
    for(int i = 0; i < 10; i++)
    {
        // Boucle pour s'assurer que l'utilisateur saisit un nombre positif
        do
        {
            printf("Veuillez saisir un nombre positif: ");
            scanf("%d", &a[i]);
        } while (a[i] <= -1);

        // Si le nombre est pair, l'ajouter à la somme des nombres pairs
        if (a[i] % 2 == 0)
        {
            b = b + a[i];
        }
        // Si le nombre est impair, le multiplier avec le produit des nombres impairs
        if (a[i] % 2 == 1)
        {
            c = c * a[i];
        }
        // Ajouter le nombre à la somme totale des nombres
        d = d + a[i];

        // Afficher la somme totale, la somme des nombres pairs et le produit des nombres impairs
        printf("Somme de tous les nombres = %d \t Somme des nombres pairs = %d \t Produit des nombres impairs = %d\n", d, b, c);
    }
    
    // Afficher tous les entiers saisis
    printf("Tous vos entiers saisis:\n");
    for(int j = 0; j < 10; j++)
    {
        printf("%d\n", a[j]);
    }

    // Afficher les résultats finaux
    printf("La somme de tous les nombres = %d\n", d);
    printf("La somme de tous les nombres pairs = %d\n", b);
    printf("Le produit de tous les nombres impairs = %d\n", c);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
