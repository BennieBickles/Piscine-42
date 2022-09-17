#include <unistd.h>

int	main(char c)
{
	c = '9' + 1;
	while (--c >= '0')
		write (1, &c, 1);
	write (1, "\n", 1);
	return (c);
}
