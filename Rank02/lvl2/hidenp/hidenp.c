#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return(i);
}
int main (int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int len = 0;
        int j = 0;
        int check = 0;
        while(av[2][i])
        {
            if(av[1][j] == av[2][i])
                j++;
            i++;   
        }
        len = ft_strlen(av[1]);
        if(j == len)
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
    return(0);
}