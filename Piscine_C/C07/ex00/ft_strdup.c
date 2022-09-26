/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:53:19 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/26 15:59:55 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = -1;
	while (++i < len)
		str[i] = src[i];
	return (str);
}
