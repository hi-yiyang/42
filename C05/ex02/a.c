/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:44:03 by yxu               #+#    #+#             */
/*   Updated: 2022/08/13 22:44:05 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
}