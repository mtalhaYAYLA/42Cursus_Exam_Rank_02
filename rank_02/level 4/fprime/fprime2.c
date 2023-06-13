#include <stdio.h>
#include <stdlib.h>

int main(int ac, char** av)
{
    if(ac == 2)
    {
        int i = 2;
        int nbr = atoi(av[1]);
        if(nbr == 1)
        {
            printf("1");
            return 0;
        }
        while(i <= nbr)
        {
            if(nbr % i == 0)
            {
                nbr /= i;
                printf("%d", i);
                if(i < nbr)
                    printf("*");
                i--;
            }
            i++;
        }
    }
    printf("\n");
}