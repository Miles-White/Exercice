#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int i;
    int somme = 0;
    for(i=10; i<21; i=i+1)
    {
        printf("%d", i);
        somme = somme + i;
        
    }
    printf("%d", somme);


}