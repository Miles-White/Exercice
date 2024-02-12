#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int a[10], j=0;
    int b=0;

    for(int i=1; i<11; i = i+1)
    {
        do
        {
            if(j >= 1)
           {
            printf("Veuillez re-saisir un nombre %d compris entre [-50; 50]: ", i);
           }
           if(j == 0)
           {
            printf("Veuillez saisir le nombre %d compris entre [-50; 50]: ", i);
            j = j + 1;
           }
           
           scanf("%d", &a[i]);
           b = b + a[i];
           
        } while (a[i] <=-51   || a[i] >= 51 );
        printf("Vous avez saisie le numeros: %d\n", a[i]);
        printf("La somme de vos saisie jusqu'a present est de: %d\n", b);
        j = 0;
        
    }
    for(int i=1; i<11; i++)
    {
        printf("Numeros %d que vous avez saisie: %d\n", i,a[i]);
    }
    printf("La somme de tout les nombres que vous avez saisie est de: %d", b);

    
    Sleep(5000);
    return 0;


}