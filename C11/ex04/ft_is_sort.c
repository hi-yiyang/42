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

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
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
