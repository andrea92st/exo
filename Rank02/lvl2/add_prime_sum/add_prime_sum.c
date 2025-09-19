#include <unistd.h>
int is_prime(int nbr)
{
    int i = 2;
    if(nbr <= 1)
        return(0);
    while(i <= (nbr / 2))
    {
        if (nbr % i == 0)
            return(0);
        i++;
    }
    return(1);
}
int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while(s[i] == ' ')
        i++;
    if(s[i] == '+' || s[i] == '-')
    {
        if(s[i] == '-')
            sign = -sign;
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return(res * sign);
}
void ft_putint(int n)
{
    char c = n + '0';
    write(1, &c, 1);
}
void ft_putnbr(int x)
{
    int i;
    if(x >= 10)
    {
        ft_putnbr(x / 10);
        ft_putint(x % 10);
    }
    if(x < 10)
        ft_putint(x);
}
int main(int ac, char **av)
{   
    if(ac == 2)
    {
        int res = 0;
        int i = 2;
        int nbr = ft_atoi(av[1]);
        while(i <= nbr)
        {
            if(is_prime(i) == 1)
                res = res + i;
            i++;
        }
        ft_putnbr(res);
        write(1, "\n", 1);
    }
    else
        write(1, "0\n", 2);
    return(0);
}