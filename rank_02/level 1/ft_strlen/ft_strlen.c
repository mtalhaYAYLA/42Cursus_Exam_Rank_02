int	ft_strlen(char *str)
{
    int i = -1;
    while (str[++i]);
    
    return (i);
}