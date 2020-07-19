/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:40:07 by emestour          #+#    #+#             */
/*   Updated: 2020/07/12 22:44:16 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		left_row(int board[4][4], int colrow[], int pos)
{
	int		i;
	int		max;
	int		count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (board[pos / 4][i] > max)
			{
				max = board[pos / 4][i];
				count++;
			}
			i++;
		}
		if (colrow[8 + pos / 4] != count)
			return (0);
	}
	return (1);
}

int		right_row(int board[4][4], int colrow[], int pos)
{
	int		i;
	int		max;
	int		count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (board[pos / 4][i] > max)
			{
				max = board[pos / 4][i];
				count++;
			}
			i--;
		}
		if (colrow[12 + pos / 4] != count)
			return (0);
	}
	return (1);
}

int		up_column(int board[4][4], int colrow[], int pos)
{
	int		i;
	int		max;
	int		count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (board[i][pos % 4] > max)
			{
				max = board[i][pos % 4];
				count++;
			}
			i++;
		}
		if (colrow[pos % 4] != count)
			return (0);
	}
	return (1);
}

int		down_column(int board[4][4], int colrow[], int pos)
{
	int		i;
	int		max;
	int		count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (board[i][pos % 4] > max)
			{
				max = board[i][pos % 4];
				count++;
			}
			i--;
		}
		if (colrow[4 + pos % 4] != count)
			return (0);
	}
	return (1);
}
