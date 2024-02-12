#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int A, B, Somme;
    float Note_INFO1, Note_AUTO1, Moyenne;

    //GotoXY(5.5);
    printf("Veuillez saisir un entier: ");
    scanf("%d", &A);

    do
    {
        //GotoXY(5.7);
        printf("Veuillez saisir un entier superieur a A: ");
        scanf("%d", &B);
        if(B <= A)
        {
            printf("ERREUR!!! B doit etre superieur a A\n");
        }
    } while (A > B);
    Somme = A + B;
    //GotoXY(5.9);
    printf("Le resultat de la somme de %d et %d = %d\n", A, B, Somme);
    //GotoXY(5.11);
    printf("\nSaisir la moyenne du module AUTO1: \n");
    scanf("%f", &Note_AUTO1);
    //GotoXY(5.13);
    printf("Saisir la moyennes du module INFO1: \n");
    scanf("%f", &Note_INFO1);

    Moyenne = (Note_INFO1 + 2* Note_AUTO1)/3;
    //GotoXY(5.15);

    printf("Moyenne du module UE1.1 =  %f", Moyenne);    


    Sleep(50000);
    return 0;
}