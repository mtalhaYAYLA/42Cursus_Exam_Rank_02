#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 65 && av[1][i] <= 90)
                j = av[1][i] - 64;

            else if(av[1][i] >= 97 && av[1][i] <= 122)
                j = av[1][i] - 96;

            else
                write(1, &av[1][i], 1);
                
            while(j)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}