#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"


int main(int argc, char const *argv[])
{
    int A,B,Somme;  // A et B variable d'entrée à saisir. Somme varriable de sortie à afficher
    printf("Veuiller Saisir A:" );
    scanf("%d",&A);
    printf("Veuiller Saisir B:" );
    scanf("%d",&B);
    Somme=A+B;
    printf("Resultat de la somme %d et %d = %d\n", A,B,Somme);
   

    int C,D,Produit;  // C et D variable d'entrée à saisir. Produit varriable de sortie à afficher
    printf("\nVeuiller Saisir C:" );
    scanf("%d",&C);
    printf("Veuiller Saisir D:" );
    scanf("%d",&D);
    Produit=C*D;
    printf("Resultat du Produit %d et %d = %d\n", C,D,Produit);
    sleep(5000);
    return 0;
}
