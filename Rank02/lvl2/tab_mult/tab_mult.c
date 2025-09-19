#include <unistd.h>

void ft_print_int(int i)
{
    char c = i + '0';
    write(1, &c, 1);
}

int minat(char *s)
{
    int res = 0;
    int i = 0;
    while(s[i])
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res);
}
void minbr(int n)
{
    char c;
    if (n > 9)
        minbr(n / 10);
    ft_print_int(n % 10);
    
}

int main (int ac, char **av)
{
    int j = 1;
    int n;
    int arg;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    arg = minat(av[1]);
    while (j <= 9)
    {
        n = arg * j;
        ft_print_int(j);
        write(1, " x ", 3);
        minbr(arg);
        write(1, " = ", 3);
        minbr(n);
        write(1, "\n", 1);
        j++;
    
    }
    return(0);
}
