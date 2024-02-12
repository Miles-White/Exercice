#include <stdio.h>

int a[10],b,c,d;

int main()
{
    
    c=1;
    for(int i=0; i<10; i++)
    {
        do
        {
            printf("Veuillez saisir un nombre: ");
            scanf("%d",&a[i]);
            
        } while (a[i] <= -1);
        if (a[i]%2 == 0)
        {
            b = b + a[i];
        }
        if (a[i]%2 == 1)
        {
            c = c * a[i];
        }
        d = d + a[i];
        printf("Somme de tout les nombres= %d \t Somme des nombres pair= %d \t Somme des nombres impair= %d\n",d,b,c );
    }
    
    printf("Tous vos entiers saisie:");
    for(int j=0; j<10;j++)
    {
        printf("%d\n",a[j]);
    }
    printf("La somme de tous les nombre= %d\n", d);
    printf("La somme de tous les nombre pair= %d\n", b);
    printf("La somme de tous les nombre impair= %d\n", c);


    sleep(500);
    return 0;
}
