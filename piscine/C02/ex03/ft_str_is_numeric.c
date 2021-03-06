/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:02:40 by emestour          #+#    #+#             */
/*   Updated: 2020/07/05 18:45:11 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}
