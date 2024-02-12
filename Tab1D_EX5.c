#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int tab[10];
    int tampon1, tampon2;

    for(int i=0; i<10; i++)
    {
        printf("Saisir un nombre: ");
        scanf("%d", &tab[i]);

        
        for(int k=i; k>0 && tab[k]<tab[k-1];k--)
        {
            tampon1 = tab[k];
            tab[k] = tab[k-1];
            tab[k-1] = tampon1;
           
        } 
        
            
        
        
        for(int j=0; j<i+1; j++)
        {
            printf("%d\t",tab[j]);
            
        }
        printf("\n");
        
    }

    
    Sleep(50000);
    return 0;
}