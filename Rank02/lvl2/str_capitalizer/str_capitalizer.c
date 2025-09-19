#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        write(1, "\n", 1);
        return(0);
    }
    int dex = 1;
    while(dex < ac)
    {
        int i = 0;
        char *str = av[dex];
        while(str[i])
        {
            if((str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32;
            if(str[0] >= 'a' && str[0] <= 'z')
                str[i] -= 32;
            if((str[i - 1] == ' ' || str[i - 1] == '\t') && str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            
            write(1, &str[i], 1);
            i++;
        }
        dex++;
        write(1, "\n", 1);
    }
    return(0);
}