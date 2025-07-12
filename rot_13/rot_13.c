#include <unistd.h>

int main (int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    char c;
    int i = 0;
    while(av[1][i])
    {
        c = av[1][i];

        if (av[1][i] <= 'Z' && av[1][i] >= 'N')
            c = av[1][i] - 13;
        else if (av[1][i] <= 'M' && av[1][i] >= 'A')
            c = av[1][i] + 13;
        else if (av[1][i] <= 'z' && av[1][i] >= 'n')
            c = av[1][i] - 13;
        else if (av[1][i] <= 'm' && av[1][i] >= 'a')
            c = av[1][i] + 13;
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}