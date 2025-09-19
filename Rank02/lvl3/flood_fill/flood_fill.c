#include <stdlib.h>
#include <stdio.h>

typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill(char **tab, int x, int y, char target, t_point size)
{
    if(x < 0 || y < 0 || x >= size.x || y >= size.y)
        return;
    if(tab[y][x] != target)
        return;
    tab[y][x] = 'F';
    fill(tab, x + 1, y, target, size);
    fill(tab, x - 1, y, target, size);
    fill(tab, x, y + 1, target, size);
    fill(tab, x, y - 1, target, size);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    if(target == 'F')
        return ;
    fill(tab, begin.x, begin.y, target, size);
}
