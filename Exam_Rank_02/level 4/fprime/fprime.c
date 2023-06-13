#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char** av)
{
    if(ac == 2)
    {

        int nbr = atoi(av[1]);
        int i = 2;
        if(nbr == 1)
        {
            printf("1");
            return(0);
        }

        while(i <= nbr)
        {
            if(nbr % i == 0)
            {
                printf("%d", i);
                if(i < nbr)
                    printf("*");
                nbr /= i;
                i--;
            }
            i++;
        } 
    } 
    printf("\n");
}