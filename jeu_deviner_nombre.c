#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a = 1753;           // Nombre à deviner
int b;                  // Variable pour stocker la saisie de l'utilisateur
int c = 0;              // Variable non utilisée (peut être supprimée)
int d = 0;              // Variable pour indiquer si le nombre a été deviné

int main()
{
    // Boucle pour permettre à l'utilisateur de deviner le nombre en moins de 10 coups
    for(int i = 0; i < 10; i++)
    {
        printf("Saisir un nombre: ");
        scanf("%d", &b); // Lire le nombre saisi par l'utilisateur

        // Vérifier si le nombre saisi est plus grand, plus petit ou égal au nombre à deviner
        if (b > a)
        {
            printf("Plus petit\n");
        }
        if (b < a)
        {
            printf("Plus grand\n");
        }
        if (b == a)
        {
            printf("Bravo!!! Vous avez deviné le nombre en moins de 10 coups.\n");
            d = 1;      // Indiquer que le nombre a été deviné
            break;      // Sortir de la boucle car le nombre a été deviné
        }        
    } 

    // Si le nombre n'a pas été deviné en moins de 10 coups
    if (d == 0)
    {
       printf("Vous avez perdu.\n");
    }

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
