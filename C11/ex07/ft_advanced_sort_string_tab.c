/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:28:29 by yxu               #+#    #+#             */
/*   Updated: 2022/08/24 02:28:34 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;
	int	j;

	size = 0;
	while (tab[size])
		size++;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				swap_str(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
