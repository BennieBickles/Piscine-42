/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:16:54 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:16:55 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_is_alpha(char *src);

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"SUCCESS":"FAIL",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZfdjbdgjgdbjgbssksfbks")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("1")?"SUCCESS":"FAIL",
			!ft_str_is_alpha(" ")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\\")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\n")?"SUCCESS":"FAIL");
}
