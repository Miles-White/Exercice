#include <stdio.h>

int a,b,c,d,e=1;
int choix=0;

int main()
{
    do
        {
            printf("Saisir un nombre A: ");
            scanf("%d", &a);
            printf("Saisir un nombre B plus grand que A: ");
            scanf("%d", &b);
        } while (b<a);
    do
    {
        
        
        c= a + b;
        d= b-a;

        printf("1 - Appel de la fonction FCT1\n\n");
        printf("2 - Appel de la fonction FCT2\n\n");
        printf("3 - Appel de la fonction FCT3\n\n");
        printf("4 - Quitter le programme\n\n");
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1:
            {
                for(int i=a; i<b+1;i++)
                {
                    if (i%2==1)
                    {
                        e=e*i;

                        
                    }
                }
                printf("%d\n",e);
                break;
            }
            case 2:
            {
                for(int i=a; i<b+1;i++)
                {
                    if (i%2==0)
                    {
                        e=e*i;
                        
                    }
                }
                printf("%d\n",e);
                break;
            }   
            case 3:
            {
                for(int i=a; i<b+1;i++)
                {
                    if (i%3==0)
                    {
                        e=e+i;
                        
                    }
                }
                printf("%d\n",e);
                break;
            }
            case 4:
            {
                choix =1;
                break;
            }
        }
    }while(choix == 1);
    
    
    
    


    sleep(500);
    return 0;
}