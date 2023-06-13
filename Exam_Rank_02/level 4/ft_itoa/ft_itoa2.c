#include <stdlib.h>
#include <stdio.h>

int lennbr(int nbr)
{
    int i = 0;
    while(nbr)
    {
        i++;
        nbr /= 10;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    int len = 0;
    int neg = 1;
    char* str;

    len = lennbr(nbr);
    if(nbr == -2147483648)
        return("-2147483648");
    if(nbr < 0)
    {
        len++;
        neg *= -1;
        nbr *= -1;
    }
    if(!(str = (char*)malloc(sizeof(char) * len + 1)))
        return(NULL);
    str[len] = '\0';
    len--;
    if(neg == -1)
    {
        str[0] = '-';
    }
    while(nbr)
    {
        str[len] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    return(str);
}

int main()
{
    printf("%s", ft_itoa(-245));
}