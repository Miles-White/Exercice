#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>

int a,b,c;
int xd, xe, xf, yd, ye, yf;
int xa, xb, xc, ya, yb, yc;
int m,n,o;

int main()
{
    printf("Veuillez saisir les coordonées du point A:");
    printf("x= ");
    scanf("%d", xa);
    printf("y= ");
    scanf("%d", ya);
    printf("Veuillez saisir les coordonées du point B:");
    printf("x= ");
    scanf("%d", xb);
    printf("y= ");
    scanf("%d", yb);
    printf("Veuillez saisir les coordonées du point C:");
    printf("x= ");
    scanf("%d", xc);
    printf("y= ");
    scanf("%d", yc);

    xa - xb = xf;
    ya - yb = yf;
    xb - xb = xd;
    yb - yb = yd;
    xc - xa = xe;
    yc - ya = ye;

    pow((xf + yf),2) + pow((xd + yd),2) = m;
    pow((xe + ye),2) = n;
    printf("Cote f + cote d = %d", m);
    printf("cote e = %d", n);


    Sleep(50000);
    return 0;

    


}