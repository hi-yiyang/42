/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:44:42 by yxu               #+#    #+#             */
/*   Updated: 2022/08/06 16:46:53 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	dig;
	int	temp;

	dig = 0;
	size--;
	while (dig <= size)
	{
		temp = tab[dig];
		tab[dig] = tab[size];
		tab[size] = temp;
		dig++;
		size--;
	}
}
