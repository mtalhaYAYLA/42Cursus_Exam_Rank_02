#include <string.h>

int ft_strchr(const char* s2, char s)
{
    int i = 0;
    while (s2[i])
    {
        if(s2[i] == s)
            return (0);
        i++;
    }
    return(1);
    
}
size_t	ft_strspn(const char *s, const char *accept)            //bu soru ilk dizinin içindekileri ikinci dizinin içindekilerdense sayar tekrarlarıda
{
    size_t i = 0;
    while (s[i])
    {
        if(ft_strchr(accept, s[i]) == 1)
            break;
        i++;
    }
    return(i);
}

#include <stdio.h>
int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilg";
    int ret;

    ret = ft_strspn(cp1, cp2);

    printf("cp2 dizisi içindeki karakterlerin cp1 dizisi içindeki sayısı: %d\n", ret);

    return 0;
}