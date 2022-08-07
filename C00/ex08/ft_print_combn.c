/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:18:44 by yxu               #+#    #+#             */
/*   Updated: 2022/08/04 19:30:56 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_comb(char *comb, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		write(1, &comb[i++], 1);
	}
	if (comb[0] < 57 - n) // ASCII value 57 as '9'
		write(1, ", ", 2);
}

void iterate(char *comb, int dig, int max, int n)
{
	while (comb[dig] <= 58 - max)
	{
		if (dig < n)
		{
			comb[dig + 1] = comb[dig] + 1;
			iterate(comb, dig + 1, max - 1, n);
			comb[dig]++;
		}
		else if (dig == n)
		{
			print_comb(comb, n);
			comb[dig]++;
		}
	}
}

void ft_print_combn(int n)
{
	char comb[n];
	int dig;
	int max;

	if (n > 10)
		return;

	max = n;
	comb[0] = '0';
	dig = 0;
	iterate(comb, dig, max, n - 1);
}
/*
int	main(void)
{
	ft_print_combn(3);
}*/