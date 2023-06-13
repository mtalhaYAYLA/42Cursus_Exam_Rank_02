#include <unistd.h>

void    repeat_alpha(char* str)
{
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z'))
        {
            int j = 0;
            j = str[i] - 96;
            while(j--)
                write(1, &str[i], 1);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            int j = 0;
            j = str[i] - 64;
            while(j--)
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
        repeat_alpha(av[1]);
    write(1, "\n", 1);
}