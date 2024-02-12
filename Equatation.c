#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>




int main()
{
    float a,b,c;
    float delta;
    float x1,x2;
    int choix;
    do
    {

        printf("Saisir la valeur de a: ");
        scanf("%f", &a);
        printf("Saisir la valeur de b: ");
        scanf("%f", &b);
        printf("Saisir la valeur de c: ");
        scanf("%f", &c);
        delta = (b*b)-(4*a*c);
        printf("Delta: %f \n", delta);
        if (delta > 0)
        {
            printf("Delta est possitif.\n");
            x1 = ((-b-sqrt(delta))/(2*a));
            x2 = ((-b-sqrt(delta))/(2*a));
            printf("1ere racine: %f\n",x1);
            printf("2nd racine: %f\n",x2);
            printf("%fx^2 + %fx + %f =  %f %f\n", a, b, c, x1, x2);
        }
        if(delta == 0)
        {
            printf("Delta n'a pas de racines dans R.\n");
        }
        if(delta < 0)
        {
            printf("Delta est negatif\n");
            x1 = -b/(2*a);
            printf("x = %f\n",x1);
        }
        printf("Voulez-vous recommencer? (OUI: 1, NON: 0) \n");
        scanf("%d", &choix);
    }
    while(choix == 1);
}




