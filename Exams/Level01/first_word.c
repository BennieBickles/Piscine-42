#include <unistd.h>

void	first_word(char *str)
{
	int	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] == '\t')
			i++;
		while (str[i] > 32 && str[i] < 127)
		{
			write (1, &str[i], 1);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		first_word(av[1]);
		write (1, "\n", 1);
	}
	else 
		write (1, "\n", 1);
	return (0);
}
