#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int a=0,i;
    int somme = 0;
    int produit = 1;
    int choix;
    do
    { 
        do
        {
            printf("Saisir un nombre strictement positif:");
            scanf("%d", &a);
        }
        while(a<=4 || a>=11);
        
        
        if(a%2 == 0)
        {
            
            for(i=2; i< a + 2 ; i=i+1)
            {
                printf("\nLe produit de ces nombres impair est de: %d\n", produit);
                produit = produit * i;
            }
        }
        else
        {
            
            for(i=1; i<a + 2; i=i+1)
            {
                printf("\nLa somme de ces nombres impair est de: %d\n", somme);
                somme = somme + i;
            }
        }
        
        printf("\nVoulez-vous recommencer? (OUI: 1, NON: 0) \n");
        scanf("%d",&choix);
        a = 0;
    }
    while(choix == 1);

    Sleep(500);
    return 0;

}