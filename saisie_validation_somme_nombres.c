#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int a[10];          // Tableau pour stocker les 10 nombres saisis par l'utilisateur
    int j = 0;          // Variable pour suivre le nombre de tentatives de saisie
    int b = 0;          // Variable pour stocker la somme des nombres saisis

    // Boucle pour saisir 10 nombres
    for(int i = 1; i < 11; i = i + 1)
    {
        do
        {
            // Vérification si c'est une tentative de resaisie
            if(j >= 1)
            {
                printf("Veuillez re-saisir un nombre %d compris entre [-50; 50]: ", i);
            }
            if(j == 0)
            {
                printf("Veuillez saisir le nombre %d compris entre [-50; 50]: ", i);
                j = j + 1; // Incrémenter le compteur de tentatives
            }

            scanf("%d", &a[i]); // Lire le nombre saisi
            b = b + a[i];       // Ajouter le nombre à la somme totale

        } while (a[i] <= -51 || a[i] >= 51); // Répéter la saisie si le nombre n'est pas dans l'intervalle [-50; 50]

        printf("Vous avez saisi le numéro: %d\n", a[i]);
        printf("La somme de vos saisies jusqu'à présent est de: %d\n", b);
        j = 0; // Réinitialiser le compteur de tentatives pour la prochaine saisie
    }

    // Afficher tous les nombres saisis
    for(int i = 1; i < 11; i++)
    {
        printf("Numéro %d que vous avez saisi: %d\n", i, a[i]);
    }

    // Afficher la somme totale des nombres saisis
    printf("La somme de tous les nombres que vous avez saisis est de: %d\n", b);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourner 0 pour indiquer que le programme s'est terminé correctement
}
