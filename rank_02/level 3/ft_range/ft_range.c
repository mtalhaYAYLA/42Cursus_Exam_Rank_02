#include <stdlib.h>

int ft_abs(int n)
{
    if(n < 0)
        return (n * -1);
    return (n);
}

int     *ft_range(int start, int end)
{
    int *tab;
    int i = 0;
    tab = (int*)malloc(sizeof(int) * ft_abs(end - start) + 1);
    if(!tab)
        return 0;
    while(start < end)
    {
        tab[i] = start;
        start++;
        i++;
    }
    tab[i] = start;
    while(start > end)
    {
        tab[i] = start;
        start--;
        i++;
    }
    tab[i] = start;
    return (tab);
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