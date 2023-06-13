#include <stdlib.h>

int ft_abs(n)
{
    if(n < 0)
        return(-n);
    return(n);
}

int     *ft_rrange(int start, int end)
{
    int i;
    i = ft_abs(start - end);
    int *nbr;
    nbr = (int *)malloc(sizeof(int) * i +1);
    if(!nbr)
        return (0);
    i = 0;
    while(start > end)
    {
        nbr[i] = end;
        end++;
        i++;
    }
    while(start < end)
    {
        nbr[i] = end;
        end--;
        i++;
    }
    nbr[i] = end;
    return(nbr);
}