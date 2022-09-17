#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	x = 0;

	if (ac == 3)
	{
		while (av[2] || av[1])
		{
			if (av[1][i] == av[2][x])
			{
				write (1, &av[1][i], 1);
				i++;
				x++;
			}
			else
				x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

