#include <stdio.h>

int a,b,c,d;
int choix=0;

int main()
{
    do
    {
        printf("Saisir un nombre A: ");
        scanf("%d", &a);
        do
        {
        
            printf("Saisir un nombre B plus grand que A: ");
            scanf("%d", &b);
        } while (b<a);
        c= a + b;
        d= b-a;
        printf("La somme de A et B est: %d\n",c);
        if (c>10 && c<20)
        {
            for(int i=a; i<b+1;i++)
            {
                if (i%2==0)
                {
                    printf("%d\t",i);
                }
            }
        }
        if (c>21 && c<30)
        {
            for(int i=a; i<b+1;i++)
                {
                    if (i%2==1)
                    {
                        printf("%d\t",i);
                    }
                }
        }
        if (c>31 && c<40)
        {
            for(int i=a; i<b+1;i++)
            {
                if (i%3==0)
                {
                    printf("%d\t",i);
                }
            }
        }
        if (c<10 || c>40)
        {
            printf("Pas de solutions.\n");
        }
        
        printf("\nVoulez-vous recommencer OUI(1) ou NON (0):");
        scanf("%d",&choix);


    }while(choix == 1);
    
    
    
    


    sleep(500);
    return 0;
}
