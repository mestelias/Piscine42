/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:09:19 by emestour          #+#    #+#             */
/*   Updated: 2020/07/16 21:07:49 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		i;

	i = 0;
	while (i++ <= 89)
	{
		ft_putchar((i) / 10 + '0');
		ft_putchar((i) % 10 + '0');
		if (i < 88)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
