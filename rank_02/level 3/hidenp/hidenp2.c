#include <unistd.h>

int main(int ac, char** av)
{
    int i = 0;
    int j = 0;
    while(av[2][j])
    {
        if(av[2][j] == av[1][i])
            i++;
        j++;
    }
    if(av[1][i] == '\0')
        write(1, "1", 1);
    else
        write(1, "0", 1);
}