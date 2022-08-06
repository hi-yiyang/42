/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:26:24 by yxu               #+#    #+#             */
/*   Updated: 2022/08/06 17:26:26 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	size--;
	i = 0;
	j = 1;
	while (i <= size)
	{
		while (j <= size)
		{
			if (tab[i] > tab[j])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
}
