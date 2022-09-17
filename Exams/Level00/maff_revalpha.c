#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'z';
	while (c > 'a')
	{
		write(1, &c, 1);
		c -= 33;
		write(1, &c, 1);
		c += 31;
	}
	write (1, "\n", 1);
	return (0);
}
