/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:29:59 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:30:02 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_addr(unsigned long offset)
{
	size_t		i;
	char	adr[17];
	char	*hexa;

	i = -1;
	adr[16] = 0;
	hexa = "0123456789abcdef";
	while (++i <= 16)
	{
		if (offset > 0)
		{
			adr[15 - i] = hexa[offset % 16];
			offset /= 16;
		}
		else
		{
			adr[15 - i] = '0';
		}
	}
	write(1, adr, 16);
	write(1, ": ", 2);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hexa;

	hex = "0123456789abcdef";
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_print_text(char *data, unsigned int size)
{
	size_t	i;

	i = -1;
	while (++i < size)
	{
		if (data[i] < ' ' || data[i] > '~')
		{
			write(1, ".", 1);
		}
		else
			write(1, &data[i], 1);
	}
}

void	ft_print_line(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*data;

	data = (unsigned char*)addr;
	i = -1;
	ft_print_addr((unsigned long)addr);
	while (++i < 16)
	{
		if (i < size)
			ft_print_hexa(data[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
	}
	ft_print_text((char*)addr, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	size_t	i;
	int				leftover;

	i = 0;
	leftover = size % 16;
	while (i++ < size / 16)
		ft_print_line(addr + 16 * (i - 1), 16);
	if (leftover)
		ft_print_line(addr + 16 * (i - 1), leftover);
	return (addr);
}
