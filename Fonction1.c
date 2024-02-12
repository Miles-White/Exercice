#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main(int argc, char const*argy[])
{
    int A,B,C,D,E,somme;
    gotoXY(5,5);
    printf("Veuillez-saisir l'entier numero 1: ");
    scanf("%d", &A);
    
    gotoXY(5,6);
    printf("Veuillez-saisir l'entier numero 2: ");
    scanf("%d", &B);

    gotoXY(5,7);
    printf("Veuillez-saisir l'entier numero 3: ");
    scanf("%d", &C);

    gotoXY(5,8);
    printf("Veuillez-saisir l'entier numero 4: ");
    scanf("%d", &D);

    gotoXY(5,9);
    printf("Veuillez-saisir l'entier numero 5: ");
    scanf("%d", &E);

    somme = A + B + C + D + E;

    gotoXY(5,11);
    printf("La somme des 5 entiers = %d", somme);

    Sleep(5000);
    return 0;
}