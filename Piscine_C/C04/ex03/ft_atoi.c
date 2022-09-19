/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:35:04 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/18 10:38:56 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int total;
    int is_negative;

    total = 0;
    is_negative = 0;
    while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\f'
            || *str == '\t' || *str == '\v' || *str == '+')
        str++;
    if (*str == '-')
    {
        is_negative = 1;
        str++;
    }
    while ((*str == '-') || (*str == '+'))
        str++;
    while (*str >= '0' && *str <= '9')
    {
        total *= 10;
        total += (*str - 48);
        str++;
    }
    if (is_negative)
        return (-total);
    else
        return (total);
}
