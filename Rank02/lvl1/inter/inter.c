#include <unistd.h>

int checko(char c, char *s)
{
   int i = 0;
    while(s[i])
    {
        if (c == s[i])
            return(1);
        i++;
    }
    return (0);
}
int check(char c, char *s)
{
    int i = 0;
    while(s[i])
    {
        if (c == s[i])
            return(1);
        i++;
    }
    return (0);
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char res[999999] = {0};

    if (ac != 3)
    {
        write(1, "\n", 1);
        return(0);

    }
    while(av[1][i])
    {
        if (check(av[1][i], av[2]) == 1)
        {
            if (checko(av[1][i], res) == 0)
            {
                write(1, &av[1][i], 1);
                res[j] = av[1][i];
                j++;
            }
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}