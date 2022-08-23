/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:37:48 by yxu               #+#    #+#             */
/*   Updated: 2022/08/23 22:37:52 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	ascend;
	int	descend;

	if (length < 2)
		return (-1);
	i = 1;
	ascend = 1;
	descend = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) <= 0)
			ascend++;
		if (f(tab[i - 1], tab[i]) >= 0)
			descend++;
		i++;
	}
	if (i == ascend || i == descend)
		return (1);
	return (0);
}

#include <stdio.h>

int	ft_tri(int a, int b)
{
    return (a - b);
}

int	main(void)
{
	static int	tabx[] = {7, 6, 6, 6, 5, 5, 3, 2, 2, 1, 1, 0, 0};
	int	length;

    length = 10;
    printf("%d\n", ft_is_sort(tabx, length, &ft_tri));
}
