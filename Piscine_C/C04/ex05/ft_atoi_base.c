/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:47:16 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/18 14:27:28 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define NO_MATCH -1

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
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
		if (is_space(*s) || *s == '+' || *s == '-')
			return (false);
		s++;
	}
	i = 0;
	while (i < s - str)
	{
		j = i + 1;
		while (j < s - str)
			if (str[i] == str[j++])
				return (false);
		i++;
	}
	return (true);
}

int		ft_resolve_base(char *base, char c)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (NO_MATCH);
}

int		ft_atoi_base(char *str, char *base)
{
	int	rad;
	int	res;
	int	is_neg;
	int	tmp;

	if (!ft_is_valid(base))
		return (0);
	rad = ft_strlen(base);
	res = 0;
	is_neg = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg *= -1;
		str++;
	}
	while ((tmp = ft_resolve_base(base, *str)) != NO_MATCH)
	{
		res *= rad;
		res += tmp;
		str++;
	}
	return (res * is_neg);
}
