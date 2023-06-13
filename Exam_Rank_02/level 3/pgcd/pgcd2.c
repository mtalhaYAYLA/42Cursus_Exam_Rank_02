#include <stdio.h>
#include <stdlib.h>

int main(int ac, char** av)
{
    int tmp;
    int s1 = atoi(av[1]);
    int s2 = atoi(av[2]);

    while(s2)
    {
        tmp = s2;
        s2 = s1 % s2;
        s1 = tmp;
    }
    printf("%d", s1);
}