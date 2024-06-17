#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       // Bibliothèque mathématique

int main()
{
    int a[10], j = 0;   // Tableau pour stocker les 10 nombres saisis par l'utilisateur, et variable de tentative
    int b = 0, pair = 0, impair = 0;   // Variables pour les sommes et les compteurs
    int nbrp = 0, nbrip = 0;           // Compteurs pour les nombres pairs et impairs

    // Boucle pour saisir 10 nombres
    for(int i = 1; i < 11; i = i + 1)
    {
        // Demande à l'utilisateur de saisir un nombre compris entre [-50; 50]
        printf("Veuillez saisir un nombre %d compris entre [-50; 50]: ", i);
        do
        {
            // Si la tentative de saisie précédente était incorrecte
            if(j >= 1)
            {
                printf("Veuillez re-saisir un nombre %d compris entre [-50; 50]: ", i);
            }
            scanf("%d", &a[i]); // Lire le nombre saisi
            j = j + 1;          // Incrémenter le compteur de tentatives
        } while (a[i] <= -51 || a[i] >= 51); // Répéter la saisie si le nombre n'est pas dans l'intervalle [-50; 50]

        printf("Vous avez saisi le numéro: %d\n", a[i]);
        b = b + a[i]; // Ajouter le nombre à la somme totale
        printf("La somme de vos saisies jusqu'à présent est de: %d\n", b);

        // Vérifier si la somme actuelle est paire ou impaire
        if(b % 2 == 0)
        {
            pair = pair + b; // Ajouter la somme actuelle à la somme des nombres pairs
            nbrp = nbrp + 1; // Incrémenter le compteur des nombres pairs
        }
        else
        {
            impair = impair + b; // Ajouter la somme actuelle à la somme des nombres impairs
            nbrip = nbrip + 1; // Incrémenter le compteur des nombres impairs
        }

        // Afficher les statistiques actuelles
        printf("La somme des nombres pairs est de: %d\n", pair);
        printf("La somme des nombres impairs est de: %d\n", impair);
        printf("Le nombre d'entiers pairs est de: %d\n", nbrp);
        printf("Le nombre d'entiers impairs est de: %d\n\n", nbrip);

        j = 0; // Réinitialiser le compteur de tentatives pour la prochaine saisie
    }

    // Afficher tous les nombres saisis
    for(int i = 1; i < 11; i++)
    {
        printf("Numéro %d que vous avez saisi: %d\n\n", i, a[i]);
    }

    // Afficher les résultats finaux
    printf("La somme de tous les nombres que vous avez saisis est de: %d\n", b);
    printf("La somme des nombres pairs est de: %d\n", pair);
    printf("La somme des nombres impairs est de: %d\n", impair);
    printf("Le nombre d'entiers pairs est de: %d\n", nbrp);
    printf("Le nombre d'entiers impairs est de: %d\n\n", nbrip);

    sleep(5); // Pause de 5 secondes avant de terminer le programme

    return 0; // Retourner 0 pour indiquer que le programme s'est terminé correctement
}
