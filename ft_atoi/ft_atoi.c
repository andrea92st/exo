#include <stdio.h>

int nbr(char c)
{
  if (c < '9' && c >= '0')
        return(1);
    return(0);

}


int signd(char c)
{
    if (c == '+')
        return(1);
    if (c == '-') 
        return(2);
    return(0);
}

int space(char c)
{
    if (c == '\v' ||c == '\r' ||c == '\n' ||c == '\f' ||c == '\t' ||c == ' ')
        return(1);
    return(0);
}
int	ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while(space(str[i]) == 1)
        i++;
    while(signd(str[i]) != 0)
    {
        if (signd(str[i]) == 2)   
            sign = -sign;
        i++;
    }
    while(nbr(str[i]) == 1)
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (sign * res);
}
