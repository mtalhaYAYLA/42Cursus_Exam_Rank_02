#include <unistd.h>

int kon(char* s2, char s1, int j)
{
    int i = 0;
    while(i < j)
    {
        if(s2[i] == s1)
            return(0);
        i++;
    }
    return 1;
}

void    ft_inter(char* s1, char* s2)
{
    int i = 0;
    int j;
    while (s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                if(kon(s1, s1[i], i) == 1)
                {
                    write(1, &s1[i], 1);
                    break;
                }
            }
            
            j++;
        }
        i++;
    }
    
}
int main(int ac, char **av)
{
    if(ac == 3)
        ft_inter(av[1], av[2]);
    write(1, "\n", 1);   
}