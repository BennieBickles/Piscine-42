#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	result;
	char	op;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		op = av[2][0];
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else 
		write(1, "\n", 1);
	return (0);
}
