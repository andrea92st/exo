#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
    int i = 0;
    char c;
    while(av[1][i])
    {
        if(av[1][i] >= 'a' && av[1][i] <= 'z')
            c = 'z' - (av[1][i] - 'a');
        else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            c = 'Z' - (av[1][i] - 'A');
        else 
            c = av[1][i];
        write(1, &c, 1);
        i++;
    }
}
    write(1, "\n", 1);
    return (0);
}