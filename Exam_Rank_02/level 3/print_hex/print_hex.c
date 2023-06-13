#include <unistd.h>

int	ft_atoi(char *str)
{
	int s = 0;

	while (*str != '\0')
	{
		s = s * 10 + *str - '0';
		++str;
	}
	return (s);
}

void	print_hex(int n)
{
	char	*hex_digit = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write (1, &hex_digit[n % 16], 1);

}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
	return (0);
}
