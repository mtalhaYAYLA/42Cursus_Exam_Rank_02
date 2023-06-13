#include <unistd.h>
#include <stdlib.h>

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int x;
    char **tab = (char**)malloc(sizeof(char) * 1000);

    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            x = 0;
            tab[j] = (char*)malloc(sizeof(char) * 1000);
            while(str[i] > 32)
            {
                tab[j][x] = str[i];
                i++;
                x++;
            }
            tab[j][x] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return tab;
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

void rev_wstr(char *str)
{
    char **tab;
    tab = ft_split(str);
    int i = 0;
    while (tab[i])
    {
        i++;
    }
    i--;
    while(0 <= i)
    {
        ft_putstr(tab[i]);
        if(0 < i)
            write(1," ",1);
        i--;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        rev_wstr(argv[1]);
    write(1,"\n",1);
}