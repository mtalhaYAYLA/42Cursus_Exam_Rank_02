#include <stdlib.h>

int ft_abs(int n)
{
    if(n < 0)
        return(-n);
    return(n);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    i = ft_abs(start - end);
    int *nbr;
    nbr = (int *)malloc(sizeof(int) * i +1);
    if(!nbr)
        return(0);
    i = 0;
    while(start < end)
    {
        nbr[i] = start;
        i++;
        start++;
    }
    while(start > end)
    {
        nbr[i] = start;
        i++;
        start--;
    }
    nbr[i] = start;
    return(nbr); 
}

#include <stdio.h>
int main()
{
    int *i = ft_range(-1,2);
    int j = 0;
    while(j <= ft_abs(2 - -1)){
        printf("%d  ",i[j]);
        j++;
    }
    
}