int control(char s, int base)
{
    char dizi1[] = "0123456789abcdef";
    char dizi2[] = "0123456789ABCDEF";

    int i = 0;
    while(base > i)
    {
        if(s == dizi1[i] || s == dizi2[i])
            return(1);
        i++;
    }
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int j = 0;
    int neg = 1;
    int res = 0;
    if(str[i] == '-')
    {
        neg *= -1;
        i++;
    }
    while(str[i] && control(str[i], str_base))
    {
        if(str_base <= 10)
        {
            res *= str_base;
            res += str[i] - '0';
        }
        else
            if(str[i] >= '0' && str[i] <= '9')
            {
                res *= str_base;
                res += str[i] - '0';
            }
            else if(str[i] >= 'a' && str[i] <= 'f')
            {
                res *= str_base;
                res += str[i] - 87;
            }
            else if(str[i] >= 'A' && str[i] <= 'F')
            {
                res *= str_base;
                res += str[i] - 55;
            }
        i++;
    }
    return(res * neg);
}

#include <stdio.h>

int main()
{
    char *str = "345";
    printf("%d",ft_atoi_base(str,16));
}