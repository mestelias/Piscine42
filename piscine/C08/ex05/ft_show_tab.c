/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 15:15:34 by emestour          #+#    #+#             */
/*   Updated: 2020/07/19 17:02:41 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int		ft_intlen(int nb)
{
	int i;

	i = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	affiche(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		a;
	char	q;

	while (par->str)
	{
		a = par->size;
		q = a + '0';
		affiche(par->size);
		write(1, &q, (ft_intlen(a) * 4));
		write(1, "\n", 1);
		affiche(par->size);
		par++;
	}
}
