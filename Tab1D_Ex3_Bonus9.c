#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int saisie[10],tampon2=0, tampon1=0;
    for(int i=0; i<10; i++)
    {
        //Saisie de 10 nombre consequtivement
        printf("Veuillez saisir un nombre: ");
        scanf("%d", &saisie[i]);
    }
    tampon1 = saisie[0];
    tampon2 = saisie[0];
    for(int j=0; j<10; j++)
        {
            //Recherche la valeur la plus grande pair
            
            if(tampon1 <= saisie[j]  && saisie[j]%2==0)
            {
                tampon1 = saisie[j];
            }
            //Rechercherche la valeur la plus petiteimpair
           
            if(tampon2 >= saisie[j] && saisie[j]%2!=0)  
            {
                tampon2 = saisie[j];
            }
        }
        if(tampon1%2 == 0 )
        {
            printf("Le nombre le plus grand pair est: %d\n", tampon1);
        }
        else
        {
            printf("Il ny'a pas de nombre pair.\n");
        }
        if(tampon2%2 != 0)
        {
            printf("Le plus petit nombre impair est: %d\n", tampon2);
        }
        else
        {
            printf("Il ny'a pas de nombre impair.\n");
        }
    Sleep(50000);
    return 0;
}