#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int saisie[3][4],tampon2=0, tampon1=0, somme=0;
    for(int i=0; i<3; i++)
    {
        
        for(int j=0; j<4; j++)
        {
            //Saisie de 3 ligne et 4 entier
            printf("Veuillez saisir un nombre: ");
            scanf("%d", &saisie[i][j]);
            //Initialise les variables tampon
            if(j==0)
            {
                tampon1 = saisie[i][0];
                tampon2 = saisie[i][0]; 
            }
            //Recherche la valeur la plus grande 
            if(tampon1 < saisie[i][j])
            {
                tampon1 = saisie[i][j];
            }
            
            //Rechercherche la valeur la plus petite
            if(tampon2 > saisie[i][j])  
            {
                tampon2 = saisie[i][j];
            }
            somme= somme + saisie[i][j];
        }
        //Affiche toutes les valeurs + Val plus petites + Val plus grandes + Somme
        printf("\n%d\t%d\t%d\t%d\tPG= %d\tPP= %d\tSomme= %d \n\n",saisie[i][0] ,saisie[i][1] ,saisie[i][2],saisie[i][3], tampon1, tampon2, somme);
        tampon1= 0, tampon2= 0, somme=0;

    }
    Sleep(50000);
    return 0;
}