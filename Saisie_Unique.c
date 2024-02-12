#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int tab[10];
    int test = 0;
    int a=0;

    for(int i=0; i<10; i++)
    {
        do
        {
            a=0;
            printf("Saisir un nombre: ");
            scanf("%d", &test);
            for(int j=0; j<10; j++)
            {
                
                if(test == tab[j])
                {
                    a = 1;
                    printf("Vous avez saisie un doublon!\n");
                    
                }
            }
        } while (a == 1);
        tab[i] = test ;    
        
    }
    
    Sleep(5000);
    return 0;
}