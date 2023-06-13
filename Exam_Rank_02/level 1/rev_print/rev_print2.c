#include <unistd.h>

void    rev_print(char* str)
{
    int i = -1;
    while(str[++i]);
    i--;
    while(str[i])
    {
        write(1, &str[i], 1);
        i--;
    }
}
int main(int ac, char** av)
{
    if(ac == 2)
        rev_print(av[1]);
    write(1, "\n", 1);
}