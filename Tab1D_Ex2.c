#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int a[10], j=0;
    int b=0, pair=0, impair=0;
    int nbrp = 0, nbrip = 0;

    for(int i=1; i<11; i = i+1)
    {
        printf("Veuillez saisir un %d compris entre [-50; 50]: ", i);
        do
        {
            if(j >= 1)
           {
            printf("Veuillez re-saisir un nombre %d compris entre [-50; 50]: ", i);
           }
           scanf("%d", &a[i]);
           j = j + 1;
        } while (a[i] <=-51   || a[i] >= 51 );
        printf("Vous avez saisie le numeros: %d\n", a[i]);
        b = b + a[i];
        printf("La somme de vos saisie jusqu'a present est de: %d\n", b);
        if(b%2 == 0)
        {
            pair = pair + b;
            nbrp = nbrp + 1;
            
        }
        if(b%2 == 1)
        {
            impair = impair + b;
            nbrip = nbrip +1;
            
        }
        printf("La somme des nombres pair est de: %d\n", pair);
        printf("La somme des nombres impair est de: %d\n", impair);
        printf("Le nombres d'entier pair est de: %d\n", nbrp);
        printf("Le nombres d'entier impair est de: %d\n\n", nbrip);
        
        j = 0;
        
    }
    for(int i=1; i<11; i++)
    {
        printf("Numeros %d que vous avez saisie: %d\n\n", i,a[i]);
    }
    printf("La somme de tout les nombres que vous avez saisie est de: %d\n", b);
    printf("La somme des nombres pair: %d\n", pair);
    printf("La somme des nombres pair: %d\n", impair);
    printf("Le nombres d'entier pair est de: %d\n", nbrp);
    printf("Le nombres d'entier impair est de: %d\n\n", nbrip);

    
    Sleep(5000);
    return 0;


}