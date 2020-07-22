/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 17:47:22 by emestour          #+#    #+#             */
/*   Updated: 2020/07/19 09:59:17 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		count;

	count = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == 0)
		return (0);
	while (min < max)
	{
		tab[count] = min;
		count++;
		min++;
	}
	tab[count] = '\0';
	return (tab);
}
