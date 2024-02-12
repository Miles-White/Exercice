#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int i;
    int somme = 0;
    int borne_max;
    printf("Saisir la borne max:");
    scanf("%d", &borne_max);
    for(i=10; i<borne_max + 1; i=i+1)
    {
        if(i%2 != 1){
            printf("%d, ", i);
            somme = somme + i;
        }
        
        
    }
    printf("\nLa somme de tout ces nombres est de: %d", somme);
    sleep(5000);


}