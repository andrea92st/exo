#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int n = 0;
    if (tab == NULL || len == 0)
        return (0);
    while (i <= len)
    {
        if (n < tab[i])
            n = tab[i];
        i++;
    }
    return (n);
}
/*
int main (int ac, char **av)
{
    int *tab;
    unsigned int len = 0;
    int zemel = max(tab, len);
    printf ("%d", zemel);
}*/