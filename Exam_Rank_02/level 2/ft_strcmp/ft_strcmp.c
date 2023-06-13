int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if(s1[i] == s2[i])
            i++;
        else
            return(s1[i] - s2[i]);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    printf("%d", ft_strcmp("merhaba", "merhaba"));
}


// kısa od

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
