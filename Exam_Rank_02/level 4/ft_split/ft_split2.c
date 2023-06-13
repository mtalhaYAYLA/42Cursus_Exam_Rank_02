#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **tmp;
    tmp = (char**)malloc(sizeof(char*) * 1000);
    if(!tmp)
        return(NULL);
    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            k = 0;
            tmp[j] = (char*)malloc(sizeof(char) * 1000);
            while(str[i] > 32)
            {
                tmp[j][k] = str[i];
                k++;
                i++;
            }
            tmp[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    tmp[j] = '\0';
    return(tmp);
}