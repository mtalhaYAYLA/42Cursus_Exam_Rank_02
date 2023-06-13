#include <unistd.h>
#include <stdio.h>

void     last_word(char* str)
{
	int i = 0;
	while(str[i])i++;
	while(i >= 0 && str[i] <= 32)i--;
	while(str[i] > 32)i--;
	i++;
	while(str[i] > 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}
	
/* int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i])
			i++;
		printf("s: %d", i);
		while(i >= 0 && av[1][i] <= 32)
			i--;
		while(i >= 0 && av[1][i] > 32)
			i--;
		i++;
		while(av[1][i] && av[1][i] > 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
} */


int main(int ac, char** av)
{
	if(ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return 0;
}