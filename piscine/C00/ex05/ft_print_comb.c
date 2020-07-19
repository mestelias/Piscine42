/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:13:21 by emestour          #+#    #+#             */
/*   Updated: 2020/07/17 11:57:28 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u++ <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u - 1);
				if (!(c == '7' && d == '8' && (u - 1) == '9'))
				{
					write(1, ", ", 2);
				}
			}
			d++;
		}
		c++;
	}
}

int main(int argc, char **argv)
{
	ft_print_comb();
	return 0;
}
