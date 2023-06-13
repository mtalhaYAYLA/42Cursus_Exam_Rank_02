#include <unistd.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int h = 1;
    int son = 0;

    while(str[i] <= 32)
        i++;
    if(str[i] == '-')
        h *= -1;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            son *= 10;
            son += str[i] - 48;
        }
        i++;
    }
    return (son * h);
}
#include <stdio.h>
int main(int argc, char** argv)
{
   printf( "%d",ft_atoi("    -456"));
}