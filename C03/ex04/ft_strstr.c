/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:43:20 by yxu               #+#    #+#             */
/*   Updated: 2022/08/10 20:43:29 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	char	*result;

	if (*to_find == '\0')
		return (str);
	needle = to_find;
	while (*str)
	{
		result = str;
		while (*str == *to_find && *str)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return (result);
		else
			to_find = needle;
		str++;
	}
	return (0);
}*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar Baz";
	puts(strstr(largestring, smallstring));
	puts(ft_strstr(largestring, smallstring));
}*/
