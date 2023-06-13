#include <unistd.h>

int ft_atoi(char* str)
{
    int i = 0;
    int tab = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        tab *= 10;
        tab += str[i] - '0';
        i++;
    }
    return(tab);
}

void    ft_putnbr(int nbr)
{
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    write(1, &"0123456789"[nbr % 10], 1);
}
int prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}


int main(int ac, char** av)
{
    int son = 0;
    if(ac == 2)
    {
        int i = 2;
        int tab = ft_atoi(av[1]);
        
        while(tab >= i)
        {
            if(prime(i))
                son += i;
            i++;
        }
    }
    ft_putnbr(son);
    write(1, "\n", 1);
}