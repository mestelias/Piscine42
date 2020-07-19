/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:39:12 by emestour          #+#    #+#             */
/*   Updated: 2020/07/01 20:08:19 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i) / 10 + '0');
			ft_putchar((i) % 10 + '0');
			ft_putchar(' ');
			ft_putchar((j) / 10 + '0');
			ft_putchar((j) % 10 + '0');
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
