#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int space(char c)
{
    if(c == ' ' || c == '\v' || c == '\r' || c == '\n' || c == '\t' || c == '\f')
        return(1);
    return(0);
}

int county (char *s)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        while(s[i] && space(s[i]) == 1)
            i++;
        if (s[i] && space(s[i]) == 0)
            j++;
        while(s[i] && space(s[i]) == 0)
            i++;
    }
    return(j);
}
void malok(char **tab, int start, int end, char *s, int x)
{
    int i = 0;
    tab[x] = malloc (sizeof (char) * (end - start + 1));
    if (tab[x] == NULL)
        return;
     while(start < end)
     {
            tab[x][i] = s[start]; 
          i++;
         start++;
     }
    tab[x][i] = '\0';

}
char    **ft_split(char *str)
{
    int i = 0;
    int x = 0;
    int end = 0;
    int start = 0;
    int count = county(str);
    char **tab =  malloc (sizeof (char*) * count + 1);
    if(tab == NULL)
        return(NULL);
    tab[count] = NULL;
    while (str[i])
    {
        while(str[i] && space(str[i]))
            i++;
        if (str[i])
        {
            start = i;
            while (str[i] && !space(str[i]))
                i++;
            end = i;
            malok(tab, start, end, str, x);
            x++;
        }
    }
    return(tab);
}
