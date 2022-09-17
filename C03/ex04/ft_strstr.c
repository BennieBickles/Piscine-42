/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:44:40 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:47:02 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = -1;
			tmp = 0;
			while (to_find[++i] != '\0')
				if (str[i] != to_find[i])
					tmp = 1;
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

