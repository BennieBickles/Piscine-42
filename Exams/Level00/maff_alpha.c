#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'a';
	while (c < 'z')
	{
		write(1, &c, 1);
		c -= 31;
		write(1, &c, 1);
		c += 33;
	}
	write (1, "\n", 1);
	return (0);

}
