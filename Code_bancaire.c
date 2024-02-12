#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int mot_de_passe = 2345 ;
int code = 0000;
int i=0;
int a = 0;
int s;

int main()
{
    do
    {
        printf("Saisir code: ");
        scanf("%d", &code);
        if (code == mot_de_passe){
            i = i + 3;
            a = 1;
        }
        else
        {
            i= i +1;
        }
    } while (i<3);
    
    if(a == 0)
    {
        printf("Trop de tentative. Carte avaler!");
    }
    else
    {
        printf("Veuillez saisir le montant souhaiter: ");
        scanf("%d", &s);
        printf("Recuperer votre argent.");
    }
    
    Sleep(5000);
    return;


}