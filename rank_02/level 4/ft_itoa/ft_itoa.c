#include <stdlib.h>
#include <stdio.h>
int nbrlen(int n)
{
    int i = 0;
    while(n)
    {
        n /= 10;
        i++;
    }
    return(i);
}
char	*ft_itoa(int nbr)
{
    char* str;
    int h = 1;
    int len = nbrlen(nbr);
   
    if(nbr == -2147483648)
        return("-2147483648");
    if(nbr < 0)
    {
        nbr *= -1;
        h = -1;
        len++;
    }
    if(!(str = (char*)malloc(sizeof(char) * len +1)))
        return(NULL);
    str[len] = '\0';
    len--;
    if(h == -1)
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