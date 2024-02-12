#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>

int a,b,c;
int A,B,C,D,E,F;
int AB, BC, AC;
int xd, xe, xf, yd, ye, yf;
int xa, xb, xc, ya, yb, yc;
int m,n,o,p,q,r,s,t;
int resulta;

int main()
{
    printf("Veuillez saisir les coordonees du point A:\n");
    printf("x= ");
    scanf("%d", &xa);
    printf("y= ");
    scanf("%d", &ya);
    printf("Veuillez saisir les coordonees du point B:\n");
    printf("x= ");
    scanf("%d", &xb);
    printf("y= ");
    scanf("%d", &yb);
    printf("Veuillez saisir les coordonees du point C:\n");
    printf("x= ");
    scanf("%d", &xc);
    printf("y= ");
    scanf("%d", &yc);

    AB = sqrt(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));
    AC = sqrt(((xc-xa)*(xc-xa))+((yc-ya)*(yc-ya)));
    BC = sqrt(((xb-xc)*(xb-xc))+((yb-yc)*(yb-yc)));

    printf("%d\n", AB);
    printf("%d\n", AC);
    printf("%d\n", BC);

    if(AB + AC - BC == 0 || AC + BC - AB == 0 || BC + AB -AC == 0){
        printf("Le triangle n'est pas rectangle.");
        
    }
    else
    {
        
        resulta = AB;
        if (AC > resulta){
        resulta = AC;   
        }
        if (BC > resulta){
            resulta = BC;
        
        }
        if(BC == resulta)
        {
            printf("Le triangle est rectangle en A.");
        }
        if(AC == resulta)
        {
            printf("Le triangle est rectangle en B.");
        }
        if(AB == resulta)
        {
            printf("Le triangle est rectangle en C.");
        }

    }

        
    



    Sleep(50000);
    return 0;

    


}