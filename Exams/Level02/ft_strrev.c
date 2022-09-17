#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (i <= len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strrev(av[1]));
		return (0);
	}
}

