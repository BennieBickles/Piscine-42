#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0); // equivalent to : if (n == 1) return 1; else return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
    {
        printf("%s\n is power of 2 ?");
        is_power_of_2(atoi(av[1])) ? printf("Yes\n") : printf("No\n");
    }
    return (0);
}
