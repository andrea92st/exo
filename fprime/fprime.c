#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int i = 2;
    int x = 0;
    if(ac != 2)
    {
        printf("\n");
        return(0);
    }
    int n = atoi(av[1]);
    while (i * i <= n)
    {
        while (n % i == 0)
        {
         if (x == 0)
            printf("%d", i);
        else
             printf("*%d", i);
        n = n / i;
        x++;
        }
        i++;
    }
    if (n > 1)
    {
        if (x == 0)
            printf("%d", n);
        else
             printf("*%d", n);
    }
    printf("\n");
    return (0);
}