#include <unistd.h>

int is_space(char c)
{
    if (c == ' ' )
        return(1);
    return(0);
}
int main (int ac, char **av)
{

    int i = 0;
    int j = 0;
    int end = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    while(av[1][i])
    {
        if(is_space(av[1][i]) == 1)
            j++;
        i++;
    }
    end = i - 1;
    if (j == 0)
    {
        i = 0;
        while(av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }    
        write(1, "\n", 1);
        return(0);
    }
    while (end >= 0)
    {
        i = end;
        while (i >= 0 && is_space(av[1][i]) == 0)
            i--;
        j = i + 1;
        while (j <= end)
        {
            write(1, &av[1][j], 1);
            j++;
        }
        if (i > 0)
            write(1, " ", 1);
        end = i - 1;
    }
    write(1, "\n", 1);
    return(0);
}