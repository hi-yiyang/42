/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:54:22 by yxu               #+#    #+#             */
/*   Updated: 2022/08/14 03:42:00 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_str_array(char *a, int *b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_str_array(int *tab, int size)
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
				swap_str_array(&tab[i], &tab[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i + 1])
		i++;
	while (i > 0)
	{

		ft_putstr(arg[i--]);
		ft_putstr("\n");
	}
}
