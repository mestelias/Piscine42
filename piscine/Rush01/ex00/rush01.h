/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emestour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 22:39:14 by emestour          #+#    #+#             */
/*   Updated: 2020/07/12 22:43:14 by emestour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

void	get_nums(char **nums, int tab[]);
int		missing_in_row(int num, int board[4][4], int pos);
int		missing_in_column(int num, int board[4][4], int pos);
int		left_row(int board[4][4], int colrow[], int pos);
int		right_row(int board[4][4], int colrow[], int pos);
int		up_column(int board[4][4], int colrow[], int pos);
int		down_column(int board[4][4], int colrow[], int pos);
int		size_is_valid(int num, int board[4][4], int pos, int colrow[]);
void	print_board(int board[4][4]);
int		fill_case(int board[4][4], int colrow[], int pos);

#endif
