/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:47:32 by emestour          #+#    #+#             */
/*   Updated: 2020/07/05 18:54:49 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
