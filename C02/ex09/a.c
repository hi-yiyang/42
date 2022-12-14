/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:25:19 by yxu               #+#    #+#             */
/*   Updated: 2022/08/09 15:27:21 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_symbol(char c)
{
	if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (cap == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			cap = 0;
		}
		else if (cap == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (is_symbol(str[i]))
			cap = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "salut, Comment tu VAS ? 42mots quarante-deUx; cinquante+ET+un";

	printf("%s\n", ft_strcapitalize(str));
}*/
