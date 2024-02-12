#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main(int argc, char const*argy[])
{
    int A,B, pdt,somme_pair, somme_impair;
    printf("\nSaisir du 1 nombre entier: ");
    scanf("%d", &A);
    printf("\nSaisie du 2eme nombre entier: ");
    scanf("%d", &B);



    for(int i=A; B<i; i++)
    {
        if(i%2 == 0)
        {
            pdt = pdt * i;
            somme_pair = somme_pair + i;
        }
        if(i%2 == 1)
        {
            somme_impair = somme_impair + i;
        }
    }

    printf("\nLe produit des nombres pairs entre %d et %d, est: %d\n", A, B, pdt);
    printf("La somme des nombre impairs est: %d\n", somme_impair);
    printf("La somme des nombres impair est: %d", somme_pair);   


    Sleep(50000);
    return 0;
}