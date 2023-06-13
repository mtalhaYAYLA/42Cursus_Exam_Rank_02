int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[i];
    if(len == 0)
        return 0;
    while(i <= len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}

#include <stdio.h>

int main()
{
    int a[] = {37,89,987,5};
    printf("%d",max(a, 4));
} 