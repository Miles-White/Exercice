#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>

int message(int x,int y, int numero)
{
    int variable;
    gotoXY(x,y);
    printf("Veuillez-saisir l'entier numero %d: ",numero);
    scanf("%d", &variable);
    return(variable);
}

int main(int argc, char const*argy[])
{
    int A[5],somme;
    for(int i=0 ; i<5; i++)
    {
        A[i] = message(5,5+i,1+i);
        somme = somme + A[i]; 
    }

    gotoXY(5,11);
    printf("La somme des 5 entiers = %d", somme);

    Sleep(5000);
    return 0;
}