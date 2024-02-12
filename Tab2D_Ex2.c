#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    //Initialisation de la variable
    int A[2][2], B[2][2], C[2][2];
    
    //Saisie de la 1ere matrice
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Saisir la valeurs %d de la matrice 1:",j+1);
            scanf("%d",&A[i][j]);            
        }
    }
    printf("\n --------------------------------------------- \n\n");
    //Saisie de la 2eme matrice
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Saisir la valeurs %d de la matrice 2:",j+1);
            scanf("%d", &B[i][j]);
        }    
    }
    //Calcule puis affichage de la matrice
    for(int k=0; k<2; k++)
    {
        for(int l=0; l<2; l++)
        {
            C[k][l]=A[k][1]*B[1][l]+A[k][0]*B[0][l];
            printf("%d", C[k][l]);
        }
        printf("\n");        
    }


    Sleep(50000);
    return 0;
}