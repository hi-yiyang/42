/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:37:08 by yxu               #+#    #+#             */
/*   Updated: 2022/08/13 23:37:12 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	factor;

	if (nb < 2)
		return (0);
	factor = 2;
	while (factor <= nb / 2)
	{
		if (nb % factor == 0)
			return (0);
		factor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
