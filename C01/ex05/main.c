/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:00:59 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:01:00 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("0123456789:\n");
	ft_putstr(str);
	printf("\n\ntest:\n");
	ft_putstr(str1);
}
