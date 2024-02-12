#include <stdio.h>

int a=1753;
int b;
int c=0;
int d=0;

int main()
{
    for(int i;i<10;i++)
    {
        printf("Saisir un nombre:");
        scanf("%d",&b);
        if (b>a)
        {
            printf("Plus petit\n");
        }
        if (b<a)
        {
            printf("Plus grand\n");
        }
        if (b==a)
        {
            printf("Bravo!!! Vous avez deviner le nombre en mois de 10 coups.");
            d=1;
            i=i+10;
        }        
        
        
    } 
    if (d==0)
    {
       printf("Vous avez perdu.");
    }
    
    


    sleep(500);
    return 0;
}
