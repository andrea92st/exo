#include <unistd.h>

int big(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(1);
    return(0);


}
int main (int ac, char **av)
{
    char c;
    int i = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    while(av[1][i])
    {
        if(big(av[1][i]) == 1)
        {
            c = av[1][i] + 32; 
            write(1, "_", 1);
            write(1, &c, 1);
            i++;
        }
        else if(big(av[1][i]) == 0)
        {
            c = av[1][i]; 
            write(1, &c, 1);
            i++;
        }
    }
     write(1, "\n", 1);
        return(0);



}