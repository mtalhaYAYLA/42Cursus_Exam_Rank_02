#include <stdlib.h>

int ft_abs(int x)
{
    if(x < 0)
        return(-x);
    return(x);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab;
    tab = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
    if(!tab)
        return 0;
    while(start < end)
    {
        tab[i] = end;
        end--;
        i++;
    }
    tab[i] = end;
    while(start > end)
    {
        tab[i] = end;
        end++;
        i++;
    }
    tab[i] = end;
    return (tab);
}