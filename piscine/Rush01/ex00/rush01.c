/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:38:29 by emestour          #+#    #+#             */
/*   Updated: 2020/07/12 23:09:40 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	get_nums(char **nums, int tab[])
{
	int		i;
	int		j;
	int		nbr;

	i = 0;
	j = 0;
	nbr = 0;
	while (nums[1][i] != '\0')
	{
		while (nums[1][i] == ' ')
			i++;
		while (nums[1][i] >= '0' && nums[1][i] <= '4')
		{
			nbr = nbr * 10 + (nums[1][i] - 48);
			if (j < 16)
			{
				tab[j] = nbr;
				j++;
			}
			nbr = 0;
			i++;
		}
	}
}

int		size_is_valid(int num, int board[4][4], int pos, int colrow[])
{
	int		i;

	i = 0;
	while (i <= 1)
	{
		if (missing_in_row(num, board, pos) == 0)
			return (0);
		if (missing_in_column(num, board, pos) == 0)
			return (0);
		if (left_row(board, colrow, pos) == 0)
			return (0);
		if (right_row(board, colrow, pos) == 0)
			return (0);
		if (up_column(board, colrow, pos) == 0)
			return (0);
		if (down_column(board, colrow, pos) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	print_board(int board[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int		fill_case(int board[4][4], int colrow[], int pos)
{
	int		size;

	if (pos == 4 * 4)
	{
		print_board(board);
		return (0);
	}
	size = 1;
	while (size <= 4)
	{
		board[pos / 4][pos % 4] = size;
		if (size_is_valid(size, board, pos, colrow))
		{
			fill_case(board, colrow, pos + 1);
		}
		size++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		colrow[16];
	int		board[4][4];

	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		get_nums(argv, colrow);
		fill_case(board, colrow, 0);
	}
	return (0);
}
