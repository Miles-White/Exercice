#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Librairy personnalise
#include <math.h>       // Bibliothèque mathématique

// Fonction principale - point d'entrée du programme
int main()
{
    int comp = 0, minute = 0; // Variables pour compter les secondes (comp) et les minutes (minute)
    char c, a = 0;            // c stocke le caractère d'entrée, a est utilisé pour la condition de boucle

    // Boucle extérieure qui s'exécute indéfiniment ou jusqu'à ce qu'une condition de sortie soit remplie
    do
    {
        // Boucle intérieure pour compter les secondes et afficher le temps
        do
        {
            gotoXY(50, 10);  // Déplace le curseur à la position (50, 10) sur la console
            Sleep(100);      // Pause de 100 millisecondes
            comp = comp + 1; // Incrémente le compteur de secondes
            printf(" %d : %d\n", minute, comp); // Affiche le temps actuel en minutes et secondes

            // Si les secondes dépassent 60, réinitialise les secondes et incrémente les minutes
            if (comp > 60)
            {
                comp = 0;
                minute = minute + 1;
            }
        } while (!kbhit()); // Continue jusqu'à ce qu'une touche soit pressée

        c = getchar();      // Récupère la touche pressée
        if (c != 'a')       // Si la touche pressée n'est pas 'a'
        {
            exit(0);        // Quitte le programme
        }
        else
        {
            // Vide le tampon d'entrée pour effacer toute entrée restante
            FlushConsoleInputBuffer(!kbhit());
        }
    } while (a = 1); // Boucle infinie (toujours vraie à cause de l'affectation)

    return 0; // Le programme ne devrait jamais atteindre ce point à cause de la boucle infinie ou de l'appel à exit
}
