#include <unistd.h>

int	main(void)
{
	int a = 'a';
	int b = 'B';

	while (b <= 'Z')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		a = a + 2;
		b = b + 2;
	}
	write (1, "\n", 1);
	return (0);
}
