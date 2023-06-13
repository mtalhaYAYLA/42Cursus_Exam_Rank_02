#include <stdlib.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char** tab;

    i = 0;
    j = 0;
    if(!(tab = (char**)malloc(sizeof(char*) * 1000)))
        return(NULL);
    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        k = 0;
        if(str[i] > 32)
        {
            tab[j] = (char*)malloc(sizeof(char) * 1000);
            while(str[i] > 32)
            {
                tab[j][k] = str[i];
                k++;
                i++;
            }
            tab[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return(tab);
}