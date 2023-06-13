#include <unistd.h>

void    epur_str(char* str)
{
    int i = 0;
    while(str[i] <= 32 && str[i] != '\0')
        i++;
    while(str[i] != '\0')
    {
        while(str[i] == ' ' && str[i + 1] == ' ')
            i++;
        if(str[i + 1] != '\0')
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char**av)
{
    if(ac == 2)
    {
        epur_str(av[1]);
    }
    write(1, "\n", 1);
}