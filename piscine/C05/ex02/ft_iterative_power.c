/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:23:59 by emestour          #+#    #+#             */
/*   Updated: 2020/07/15 11:08:05 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nbr;

	nbr = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 1)
	{
		nb *= nbr;
		power--;
	}
	return (nb);
}
