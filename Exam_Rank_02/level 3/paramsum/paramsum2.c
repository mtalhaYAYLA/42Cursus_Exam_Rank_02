#include <unistd.h>

void ft_num(int x)
{
    if(x > 9)
        ft_num(x /10);
    write(1, &"0123456789"[x % 10], 1);
}
int main(int ac , char** av)
{
    (void)av;
    ft_num(ac-1);
    write(1,"\n", 1);
}