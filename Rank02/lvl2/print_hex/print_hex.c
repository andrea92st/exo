#include <unistd.h>

int atoh(char *s)
{
    int i = 0;
    int res = 0;
    int pos = 1;

    if(s[i] == '+' || s[i] == '-')
    {
        if(s[i] == '-')
            pos = -1;
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return(res * pos);

}

void printhex(int x)
{
    char tab[] = "0123456789abcdef";
    if(x >= 16)
        printhex(x / 16);
    x = (x % 16);
    write(1, &tab[x % 16], 1);
}
int main( int ac, char **av)
{
    if(ac == 2)
    {
        int x = atoh(av[1]);
        printhex(x);
    }
    write(1, "\n", 1);
    return (0);
}