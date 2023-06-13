#include <stdlib.h>

int ft_abs(int n)
{
    if(n < 0)
        return(-n);
    return(n);
}

int     *ft_range(int start, int end)
{
    int *tab;
    int i = 0;
    tab = (char*)malloc(sizeof(int) * ft_abs(start - end) +1);
    if(!(tab))
        return(NULL);
    if(start < end)
    {
        tab[i] = start;
        i++;
        start++;
    }
    tab[i] = start;
    if(start > end)
    {
        tab[i] = start;
        i++;
        start--;
    }
    tab[i] = start;
    return(tab);
}