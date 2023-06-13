#include <unistd.h>

int ft_atoi(char* str)
{
    int i = 0;
    int son = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        son *= 10;
        son += str[i] - '0';
        i++;
    }
    return(son);
}

int prime(int nbr)
{
    int i = 2;
    while(i < nbr)
    {
        if(nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    ft_putnbr(int son)
{
    if(son >= 10)
        ft_putnbr(son / 10);
    write(1, &"0123456789"[son % 10], 1);
}

int main(int ac, char** av)
{
    if(ac == 2)
    {
        int i = 2;
        int son = 0;
        int nbr;
        nbr = ft_atoi(av[1]);
        while(nbr >= i)
        {
            if(prime(i))
                son += i;
            i++;
        }
        ft_putnbr(son);
    }
    if(ac != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
}

// girilen sayı dahil öncesindeki asalsayıların toplamını döndüreen bir program.