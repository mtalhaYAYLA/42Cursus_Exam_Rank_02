#include <stdlib.h>

int ft_strlen(char* str)
{
    int i = -1;
    while(str[++i]);
    return (i);
}
char    *ft_strdup(char *src)
{
    int i ;
    int j = 0;
    i = ft_strlen(src);
    char* str;
    str = (char*)malloc(sizeof(char) * i);
    if(src[j] != NULL)
        while(src[j])
        {
            str[j] = src[j];
            j++;
        }
        str[j] = '\0';
    return(str);
}

#include <stdio.h>
#include <string.h>
int main()
{
    printf("%s, %s" , ft_strdup("merhaba"), strdup("merhaba"));
}