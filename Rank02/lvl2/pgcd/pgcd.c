#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (int ac, char **av)
{
   
    if (ac == 3)
    {
    
        int i = 2;
        int pgcd = -1;
        int x = atoi(av[1]);
        int y = atoi(av[2]);
        while(i <= x && i <= y)
        {
            if(x % i == 0 && y % i == 0)
                pgcd = i;
            i++;
        }
        if(pgcd == -1)
            pgcd = 1;
        printf("%d\n", pgcd);
        return(0);
    }
    else
    {
        printf("\n");
        return(0);
    }
} 