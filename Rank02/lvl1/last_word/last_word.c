#include <unistd.h>

int space(char c)
{
    if (c == ' ' ||c == '\r' ||c == '\n' ||c == '\t' ||c == '\f')
        return(1);
    return(0);
}

int main (int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac != 2)
    {
       write(1, "\n", 1);
        return(0);
    }
    while (av[1][i])
        i++;
    i--;
    while(space(av[1][i]) == 1)
        i--;
    j = i;
    while(space(av[1][i]) == 0)
        i--;
    i++;
    while (i <= j)
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}