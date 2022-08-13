/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:17:09 by yxu               #+#    #+#             */
/*   Updated: 2022/08/13 23:17:11 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rt;

	rt = 0;
	while (rt * rt < nb)
	{
		rt++;
		if (rt * rt == nb)
			return (rt);
		else if (rt * rt > nb)
			return (0);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(144));
}
