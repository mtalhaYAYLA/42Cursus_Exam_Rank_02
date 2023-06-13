char    *ft_strrev(char *str)
{
    int i = -1;
    while(str[++i]);
    char tmp;
    int j= -1;
    while(++j < i/2)
    {
        tmp = str[j];
        str[j] = str[i -1 -j];
        str[i -1 - j] = tmp;
    }
    return (str);
}