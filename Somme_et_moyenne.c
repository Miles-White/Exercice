#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" // Inclusion de la bibliothèque personnalisée pour la gestion de la console
#include <math.h>       

// Fonction principale - point d'entrée du programme
int main()
{
    // Déclaration des variables
    int A, B, Somme;               // Variables pour stocker les entiers et leur somme
    float Note_INFO1, Note_AUTO1, Moyenne; // Variables pour stocker les notes et la moyenne

    // Demande à l'utilisateur de saisir un entier
    printf("Veuillez saisir un entier: ");
    scanf("%d", &A); // Lit l'entier saisi par l'utilisateur et le stocke dans A

    // Boucle do-while pour demander un entier supérieur à A
    do
    {
        printf("Veuillez saisir un entier superieur a A: "); // Invite l'utilisateur à saisir un entier supérieur à A
        scanf("%d", &B); // Lit l'entier saisi par l'utilisateur et le stocke dans B
        if (B <= A) // Si B n'est pas supérieur à A
        {
            printf("ERREUR!!! B doit etre superieur a A\n"); // Affiche un message d'erreur
        }
    } while (A > B); // Continue la boucle tant que B n'est pas supérieur à A

    // Calcule la somme de A et B
    Somme = A + B;
    printf("Le resultat de la somme de %d et %d = %d\n", A, B, Somme); // Affiche le résultat de la somme

    // Demande à l'utilisateur de saisir la moyenne du module AUTO1
    printf("\nSaisir la moyenne du module AUTO1: \n");
    scanf("%f", &Note_AUTO1); // Lit la moyenne saisie et la stocke dans Note_AUTO1

    // Demande à l'utilisateur de saisir la moyenne du module INFO1
    printf("Saisir la moyenne du module INFO1: \n");
    scanf("%f", &Note_INFO1); // Lit la moyenne saisie et la stocke dans Note_INFO1

    // Calcule la moyenne pondérée des deux notes
    Moyenne = (Note_INFO1 + 2 * Note_AUTO1) / 3;
    printf("Moyenne du module UE1.1 =  %f", Moyenne); // Affiche la moyenne calculée

    // Pause de 50 secondes avant de terminer le programme
    Sleep(50000);
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
