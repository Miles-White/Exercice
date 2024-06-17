#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a, b, c;            // Déclaration des variables globales

int main()
{
    do
    {
        // Demande à l'utilisateur de saisir un entier pair dans l'intervalle [-20;20]
        printf("Veuillez saisir un entier pair dans l'intervalle [-20;20]: ");
        scanf("%d", &a);

        // Vérifie si l'entier saisi est en dehors de l'intervalle [-21;21] et est impair
        if ((a > 21 || a < -21) && a % 2 == 1)
        {
            printf("L'entier saisi est impair et n'est pas dans l'intervalle [20;-20]\n");
        }
        // Vérifie si l'entier saisi est en dehors de l'intervalle [-21;21] et est pair
        else if ((a > 21 || a < -21) && a % 2 == 0)
        {
            c = 1;
            printf("L'entier saisi n'est pas dans l'intervalle [20;-20]\n");
        }
        // Vérifie si l'entier saisi est impair et dans l'intervalle [-21;21]
        else if (a % 2 == 1)
        {
            printf("L'entier saisi est impair\n");
        }
    }
    // Continue la boucle tant que l'entier saisi est pair et en dehors de l'intervalle [-21;21]
    while (a % 2 == 0 && (a > 21 || a < -21));

    // Affiche que l'utilisateur a saisi un nombre pair dans l'intervalle [-20;20]
    printf("Vous avez saisi un nombre: %d. Il est pair dans l'intervalle [-20;20]", a);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
