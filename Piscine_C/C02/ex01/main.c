/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:13:56 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:14:55 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	int i;
	char dest[] = "Epic fail !";
	char src[] = "Success !";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 12)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL!", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}
