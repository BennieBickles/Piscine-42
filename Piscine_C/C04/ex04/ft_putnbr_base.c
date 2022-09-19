/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:39:48 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/18 10:48:38 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	ft_is_valid(char *str)
{
	char	*s;
	int		i;
	int		j;

	s = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*s)
	{
		if (*s == '\t' || *s == '\n' || *s == '\v' || *s == '\f'
			|| *s == '\r' || *s == ' ' || *s == '+' || *s == '-')
			return (false);
		s++;
	}
	i = 0;
	while (i < (s - str))
	{
		j = i + 1;
		while (j < (s - str))
			if (str[i] == str[j++])
				return (false);
		i++;
	}
	return (true);
}

void	ft_putnbr_base_recursive(int nb, char *base, int rad)
{
	if (nb == -2147483648)
	{
		ft_putnbr_base_recursive(nb / rad, base, rad);
		write(1, &(base[-(nb % rad)]), 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nb, base, rad);
		return ;
	}
	if (nb > rad - 1)
		ft_putnbr_base_recursive(nb / rad, base, rad);
	write(1, &(base[nb % rad]), 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	rad;

	if (!ft_is_valid(base))
		return ;
	rad = ft_strlen(base);
	ft_putnbr_base_recursive(nb, base, rad);
}
