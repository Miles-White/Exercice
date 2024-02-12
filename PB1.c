#include <stdio.h>

int a,b,c;

int main()
{
    do
    {
        printf("Veuillez saisir un entier pair dans l'intervalle [-20;20]: ");
        scanf("%d", &a);
        if ((a>21 || a<-21) && a%2==1)
            {
                printf("L'entier saisie est impair et n'est pas dans l'intervalle [20;-20]\n");
            }
        else if ((a>21 || a<-21) && a%2==0)
            {
                c =1;
                printf("L'entier saisie n'est pas dans l'intervalle [20;-20]\n");
            }
        else if( a%2==1)
            {
                printf("L'entier saisie est impair\n");
            }
    } while (a%2==0 && (a>21 || a<-21));

    printf("Vous avez saisie un nombre: %d. Il est pair dans l'intervalle [-20;20]", a);
    
   
    
    


    sleep(500);
    return 0;
}
