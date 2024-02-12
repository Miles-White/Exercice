#include <stdio.h>

int a,b,c=1;

int main()
{
    do
    {
        printf("Saisir un nombre superieur a 1000: ");
        scanf("%d",&a);
    }
    while(a<1000);
    do
    {
        do
        {
            printf("Saisir un nombre: ");
            scanf("%d",&b);
        } while (b<1);
        
        
        c=c*b;
        printf("Produit total %d\n",c);
    } while (c<=a);
    
        



    sleep(500);
    return 0;
}
