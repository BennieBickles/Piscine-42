#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(unsigned char *str)
{
	int n;
	int i;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}

int	main(void)
{
    printf("Real atoi: %d\n", atoi("-999999999999999"));
    printf("My atoi: %d\n", ft_atoi("-999999999999999"));
    return 0;
}
