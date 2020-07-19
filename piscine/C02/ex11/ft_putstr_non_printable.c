/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:41:22 by emestour          #+#    #+#             */
/*   Updated: 2020/07/09 13:23:58 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexadecimal(char c)
{
	char			*base_hexa;
	unsigned char	nb;
	int				a;
	int				b;

	nb = (unsigned char)c;
	base_hexa = "0123456789abcdef";
	a = nb / 16;
	b = nb % 16;
	ft_putchar('\\');
	ft_putchar(base_hexa[a]);
	ft_putchar(base_hexa[b]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexadecimal(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
