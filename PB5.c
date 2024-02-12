#include <stdio.h>

int a[100];
int b=0,c;

int main()
{
    for (int j = 0; j < 100; j++)
    {
        printf("Saisir un entier:");
        scanf("%d",&a[j]);
        c=c+1;
        if (a[j]==50)
        {
            j=j+100;
        }
        
    }
    c=c-1;

    for (int i=0; i<c;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    


    sleep(500);
    return 0;
}
