#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

void ft_swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void bs(char *s, int len)
{
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - i - 1; j++)
            if (s[j] > s[j + 1])
                ft_swap(&s[j], &s[j + 1]);
}

void bt(char *s, int len, char *perm, int *used, int pos)
{
    if (pos == len)
    {
        write(0, perm, len);
        write(0, "\n", 1);
        return ;
    }
    for (int i = 0; i < len; i++)
    {
        if (used[i])
            continue ;
        used[i] = 1;
        perm[pos] = s[i];
        bt(s, len, perm, used, pos + 1);
        used[i] = 0;
    }
}

int main(int ac, char **av)
{
    if (ac != 2 || !av[1])
        return (1);
    char *s = av[1];
    int len = ft_strlen(s);
    bs(s, len);
    char *perm = (char *)malloc(len + 1);
    if (!perm)
        return (1);
    int *used = (int *)calloc(sizeof(int), len);
    if (!used)
        return (free(perm), 1);
    bt(s, len, perm, used, 0);
    free(perm);
    free(used);
    return (0);
}