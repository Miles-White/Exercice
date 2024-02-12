#include <stdio.h>

int a,b;
int somme_impaire;
int produit=1;

int main()
{
    do
    {
        printf("Saisir A:");
        scanf("%d",&a);
        printf("Saisir B:");
        scanf("%d",&b);
        if (a>b)
        {
            printf("On veut A<B\n");
        }
    }
    while(a>b);
    for(int i=a;i<b+1;i++)
    {
        if(i%2==1)
        {
            somme_impaire=somme_impaire+i;
        }
    }
    printf("Somme des nombres compris entre %d et %d = %d\n", a,b,somme_impaire);
    if(somme_impaire%2==0)
    {
        for(int i=a;i<somme_impaire+1;i++)
        {
            produit=produit*i;
        }
        printf("Produit entre %d et %d=%d\n", a,somme_impaire,produit);
    }
    else
    {
        for(int i=1;i<somme_impaire;i++)
        {
            if(i%2==0)
            {
                produit=produit*i;
            }
        }
        printf("Produit entre 1 et %d= %d\n",somme_impaire,produit);
    }



    sleep(500);
    return 0;
}
