#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int i;
    int somme = 0;
    int borne_max;
    int choix;
    do
    { 
        do
        {
            printf("Saisir la borne max:");
            scanf("%d", &borne_max);
        }
        while (borne_max < 15 || borne_max > 23);
        int somme = 0;
        for(i=10; i<borne_max + 1; i=i+1)
        {
            if(i%2 != 1){
                printf("%d, ", i);
                somme = somme + i;
            }
            
            
        }
        printf("\nLa somme de tout ces nombres est de: %d", somme);
        printf("\nVoulez-vous recommencer? (OUI: 1, NON: 0) \n");
            scanf("%d", &choix);
    }
    while(choix == 1);
    sleep(5000);


}