#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"
#include <math.h>


int main()
{
    int comp=0, minute=0;
    char c, a=0;
    do
    {
        
        
        do
        {
            gotoXY(50,10);
            Sleep(100);
            comp = comp + 1;
            printf(" %d : %d\n", minute, comp);
            if(comp > 60 )
            {
                comp=0;
                minute = minute + 1;
            }
        } while (!kbhit());
        c = getchar();
        if(c != 'a')
        {
            exit(0);
        }
        else
        {
            FlushConsoleInputBuffer(!kbhit());
        }
        
    } while (a = 1);
    return 0;
}