#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf
#include <unistd.h>     // API POSIX pour la fonction sleep
#include "O:\INFO1\Bib_INFO1.h" //Librairy personnalisé
#include <math.h>       // Bibliothèque mathématique

// Déclaration des variables globales
int mot_de_passe = 2345; // Le mot de passe correct
int code = 0000;         // Variable pour stocker le code saisi par l'utilisateur
int i = 0;               // Compteur pour le nombre de tentatives
int a = 0;               // Indicateur de succès de la saisie du mot de passe
int s;                   // Variable pour stocker le montant saisi par l'utilisateur

// Fonction principale - point d'entrée du programme
int main()
{
    // Boucle do-while pour permettre jusqu'à 3 tentatives de saisie du mot de passe
    do
    {
        printf("Saisir code: "); // Invite l'utilisateur à saisir le code
        scanf("%d", &code);      // Lit le code saisi par l'utilisateur
        if (code == mot_de_passe) // Si le code saisi est correct
        {
            i = i + 3;           // Augmente le compteur pour sortir de la boucle
            a = 1;               // Indique que la saisie du mot de passe a réussi
        }
        else                     // Si le code saisi est incorrect
        {
            i = i + 1;           // Incrémente le compteur de tentatives
        }
    } while (i < 3);             // La boucle continue jusqu'à 3 tentatives

    // Si l'utilisateur n'a pas réussi à saisir le mot de passe correct
    if (a == 0)
    {
        printf("Trop de tentatives. Carte avalée!"); // Message d'échec après trop de tentatives
    }
    else // Si l'utilisateur a saisi le mot de passe correct
    {
        printf("Veuillez saisir le montant souhaité: "); // Demande à l'utilisateur de saisir un montant
        scanf("%d", &s); // Lit le montant saisi par l'utilisateur
        printf("Récupérez votre argent."); // Invite l'utilisateur à récupérer son argent
    }
    
    Sleep(5000); // Pause de 5 secondes avant de terminer le programme
    return 0; // Retourne 0 pour indiquer que le programme s'est terminé correctement
}
