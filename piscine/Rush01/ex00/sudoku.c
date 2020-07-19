/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:40:40 by emestour          #+#    #+#             */
/*   Updated: 2020/07/12 22:44:46 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		missing_in_row(int num, int board[4][4], int pos)
{
	int		column;

	column = 0;
	while (column < pos % 4)
	{
		if (board[pos / 4][column] == num)
			return (0);
		column++;
	}
	return (1);
}

int		missing_in_column(int num, int board[4][4], int pos)
{
	int		row;

	row = 0;
	while (row < pos / 4)
	{
		if (board[row][pos % 4] == num)
			return (0);
		row++;
	}
	return (1);
}
