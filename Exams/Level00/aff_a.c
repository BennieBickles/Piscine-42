#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
		}
		write (1, "a\n", 2);
		return (0);
	}
	write (1, "a\n", 2);
	return (0);
}
