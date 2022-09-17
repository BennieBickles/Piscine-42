#include <unistd.h>

int	main(void)
{
	int z = 'z';
	int y = 'Y';

	while (y >= 'A')
	{
		write (1, &z, 1);
		z = z - 2;
		write (1, &y, 1);
		y = y - 2;
	}
	write (1, "\n", 1);
	return (0);
}
