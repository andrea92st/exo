#include<stdio.h>
#include<stdlib.h>

int ft_intlen(int nbr)
{
    int i = 1;
    if (nbr < 0)
    {
        nbr = -nbr;
        i++;
    }
    while(nbr >= 10)
    {
        nbr = nbr / 10;
        i++;
    }
    return(i);
}

void ft_putnbr(char *dest, int len, int nbr)
{
    while(nbr >= 10)
    {
        dest[len] = (nbr % 10) + '0';
        nbr = nbr / 10;
        len--;
    }
    if(nbr < 10)
        dest[len] = nbr % 10 + '0';
}
char	*ft_itoa(int nbr)
{
    if(nbr == -2147483648)
    {
        char *min = malloc (11);
        min[0] = '-';
        min[1] = '2';
        min[2] = '1';
        min[3] = '4';
        min[4] = '7';
        min[5] = '4';
        min[6] = '8';
        min[7] = '3';
        min[8] = '6';
        min[9] = '4';
        min[10] = '8';
        min[11] = '\0';
        return(min);
    }
    int len = ft_intlen(nbr);
    char *dest = malloc (sizeof(char) * len + 1);
    if (dest == NULL)
        return(NULL);
    if(nbr < 0)
    {
        dest[0] = '-';
        nbr = -nbr;
    }
    int mark = len;
    len--;
    ft_putnbr(dest, len, nbr);
    dest[mark] = '\0';
    return(dest);
}
