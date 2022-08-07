/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:12:18 by yxu               #+#    #+#             */
/*   Updated: 2022/08/07 11:17:21 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	print_row(int y, char start, char middle, char end)
{
	int	col;

	col = 0;
	while (++col <= y)
		{
			if (col == 1)
				ft_putchar(start);
			else if (col != 1 && col != y)
				ft_putchar(middle);
			else if (col == y)
				ft_putchar(end);
		}
	ft_putchar('\n');
}

void	rush(int y, int x)
{
	int	row;
	int	col;

	row = 0;
	while (++row <= x)
	{
		if (row == 1 || row == x)
			print_row(y, 'o', '-', 'o');
		else
		{
			print_row(y, '|', ' ', '|');
		}
	}
}
