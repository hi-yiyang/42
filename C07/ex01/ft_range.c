/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:38:32 by yxu               #+#    #+#             */
/*   Updated: 2022/08/16 23:38:42 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*dest;

	if (min >= max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == 0)
		return (0);
	dest = ptr;
	while (min < max)
	{
		*(ptr++) = min++;
	}
	return (dest);
}
