#include <unistd.h>

void    snake_to_camel(char* str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == '_'){
            i++;
            str[i] -= 32;
            write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char** av)
{
    if(ac == 2)
        snake_to_camel(av[1]);
    write(1, "\n", 1);
}
//&& (str[i+1] >= 'a' && str[i+1] <= 'z'