/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 10:01:49 by emestour          #+#    #+#             */
/*   Updated: 2020/07/20 13:03:58 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		len;
	int		i;

	len = (max - min);
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(*tab) * (len));
	if (tab == NULL)
	{
		return (-1);
	}
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
