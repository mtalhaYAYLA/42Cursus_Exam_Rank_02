#include <unistd.h>
#include <stdlib.h>

char **ft_siplit(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **tab;
    if(!(tab = (char**)malloc(sizeof(char*) * 1000)))
        return(NULL);
    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            k = 0;
            tab[j] = (char*)malloc(sizeof(char) * 1000);
            while(str[i] > 32)
            {
                tab[j][k] = str[i];
                i++;
                k++;
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

void    ft_putstr(char* str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    rostring(char* str)
{
    char** tab;
    tab = ft_siplit(str);
    int  i = 1;
    while(tab[i])
    {
        ft_putstr(tab[i]);
        write(1, " ", 1);
        i++;
    }
    ft_putstr(tab[0]);
}

int main(int ac, char **av)
{
    if(ac > 1)
        rostring(av[1]);
    write(1, "\n", 1);
}