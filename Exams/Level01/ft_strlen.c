#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = -1;
	while (str[i])
		i++;
	return (i - 1);
}

/* WITH THE '\0'
 *
 *
 *
 * int     ft_strlen(char *str)
{
        int i = -1;
        while (str[i])
                i++;
        return (i);
}\*
