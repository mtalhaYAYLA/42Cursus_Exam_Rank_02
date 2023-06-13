#include <unistd.h>

int main(int ac, char** av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        while(av[2][j])
        {
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }
        if(av[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}