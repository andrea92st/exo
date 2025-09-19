#include <unistd.h>

void ft_printnbr(int i)
{
    char c = i + '0';
    write(1, &c, 1);
}
void ft_putnbr(int i)
{
    if(i >= 10)
    {
        ft_putnbr(i / 10);
        ft_printnbr(i % 10);
    }
    if(i < 10)
        ft_printnbr(i);
}
int main (int ac, char **av)
{
    int i = ac - 1;
    ft_putnbr(i);
    write(1, "\n", 1);
    return(0);
}