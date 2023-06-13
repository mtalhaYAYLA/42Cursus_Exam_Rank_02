#include <unistd.h>

int kont1(char* str1, char x, int i)
{
    int k = 0;
    while(k < i)
    {
        if(str1[k] == x)
            return 0;
        k++;
    }
    return (1);
}

/* int kont2(char* str2, char x, int i)
{
    int k = 0;
    while(k < i)
    {
        if(str2[k] == x)         // olması gerekmiyor :))))
            return 0;
        k++;
    }
    return (1);
} */

int main(int ac, char** av)
{
    if(ac == 3)
    {
        int i = 0;
        int j;
        while(av[1][i])
        {
            if(kont1(av[1], av[1][i], i) == 1)
                write(1, &av[1][i], 1);
            i++;
        }
        while(av[2][j])
        {
            if(kont1(av[1], av[2][j], i) == 1)
            {
                if(kont1(av[2], av[2][j], j) == 1)
                {
                    write(1, &av[2][j], 1);
                }
            }
            j++;
        }
    }
    write(1, "\n", 1);
}