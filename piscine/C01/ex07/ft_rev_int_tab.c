/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 12:44:59 by emestour          #+#    #+#             */
/*   Updated: 2020/07/05 12:25:23 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	while (i++ < (size / 2))
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[j];
		tab[j--] = tmp;
	}
}
