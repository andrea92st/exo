#include <unistd.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t')
        return(0);
    return(1);
}
int main(int ac, char **av)
{
    int check = 0;
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            while(av[1][i] && is_space(av[1][i]) == 0)
                i++;
            while(av[1][i] && is_space(av[1][i]) == 1)
            {
                    write(1, &av[1][i], 1);
                i++;
            }
            int j = i;
            while(av[1][j])
            {
                if(is_space(av[1][j]) == 1)
                    check = 1;
                j++;
            }
            if(av[1][i] != '\0' && check == 1)
                write(1, " ", 1);
            check = 0;
        }
    }
    write(1, "\n", 1);
    return(0);
}