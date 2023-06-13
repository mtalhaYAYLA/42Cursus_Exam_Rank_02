#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	s1 = atoi(av[1]);
	int s2 = atoi(av[2]);

	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	if (s1 <= 0 || s2 <= 0)
	{
		printf("\n");
		return (0);
	}
	while (s2 != 0)
	{
		int temp = s2;
		s2 = s1 % s2;
		s1 = temp;
	}
	printf("%d", s1);
	return (0);
}
