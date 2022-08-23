/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:28:25 by yxu               #+#    #+#             */
/*   Updated: 2022/08/24 02:28:34 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				swap_str(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int		index;
	char	*tab[7];

	// tab = malloc(7 * sizeof(char *));
	tab[0] = "YOU";
	tab[1] = "you";
	tab[2] = "ARE";
	tab[3] = "are";
	tab[4] = "the";
	tab[5] = "champion";
	tab[6] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <%p> = %s\n", index, tab + index, tab[index]);
		index++;
	}
	ft_sort_string_tab(tab);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <%p> = %s\n", index, tab + index, tab[index]);
		index++;
	}
}
