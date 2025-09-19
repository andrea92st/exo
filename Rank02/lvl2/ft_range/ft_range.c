#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *tab;
    int size;

    if(end >= start)
        size = end - start;
    else if (start > end)
        size = start - end;
    tab = malloc (sizeof (int) * size);
    int i = 0;
    if(end >= start)
    {
        while(start <= end)
        {
            tab[i] = start;
             start++;
             i++;
         }
    }
    else
    {
         while (start >= end)
         {
            tab[i] = start;
             start--;
             i++;
         }
    }

    return (tab);

}
