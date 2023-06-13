#include <stdlib.h>

int numlen(int nbr)
{
    int i = 0;
    if(nbr < 0)
    {
        nbr = -nbr;
        i++;
    }
    while (nbr)
    {
        nbr /= 10;
        i++;
    }
    return(i);
}
char	*ft_itoa(int nbr)
{
    int i = 0;
    i =  numlen(nbr);
    char *tab;

    if(nbr == -2147483648)
        return("-2147483648");
    if(!(tab = (char*)malloc(sizeof(char) * i)))
        return(NULL);
    tab[i] = '\0';
    i--;
    if(nbr < 0)
    {
        tab[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        tab[i] = nbr % 10 + '0';
        nbr /= 10;
        i--;
    }
    return(tab);
}

#include <stdio.h>
int main()
{
    printf("%s", ft_itoa(-214));
}