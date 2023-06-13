#include <unistd.h>

int ft_atoi(char* s)
{
    int i = 0;
    int h = 1;
    int son = 0;
    while(s[i] <= 32)
        i++;
    if(s[i] == '-')
    {
        h *= -1;
    }
    if(s[i] == '-' || s[i] == '+')
        i++;
    while(s[i])
    {
        son *= 10;
        son += s[i] - 48;
        i++;
    }
    return (son * h);
}

void    ft_putnbr(int x)
{
    if(x >= 10)
        ft_putnbr(x / 10);
    write(1, &"0123456789"[x % 10], 1);
}

int main(int ac, char** av)
{
    if(ac == 2)
    {
        int nbr = ft_atoi(av[1]);

        int i = 1;
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            if(i < 9)
                write(1, "\n", 1);
            i++;
        }    
    }
    write(1, "\n", 1);
}