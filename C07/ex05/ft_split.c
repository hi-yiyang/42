/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:53:42 by yxu               #+#    #+#             */
/*   Updated: 2022/08/18 00:53:43 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j++])
			return (1);
	}
	return (0);
}

int	cal_arr_size(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && in_charset(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !in_charset(*str, charset))
			str++;
	}
	return (count);
}

int	cal_ele_len(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && in_charset(*str, charset) == 0)
	{
		count++;
		str++;
	}
	return (count);
}

char	*mk_ele(char **str, char *charset)
{
	int		ele_len;
	char	*ele;
	char	*locator;

	ele_len = cal_ele_len(*str, charset);
	ele = malloc(sizeof(char) * (ele_len + 1));
	if (ele == 0)
		return (0);
	locator = ele;
	while (**str && in_charset(**str, charset) == 0)
		*(locator++) = *((*str)++);
	*locator = '\0';
	return (ele);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		arr_size;
	char	**arr;

	arr_size = cal_arr_size(str, charset);
	arr = malloc(sizeof(char *) * (arr_size + 1));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < arr_size)
	{
		while (*str && in_charset(*str, charset))
			str++;
		arr[i++] = mk_ele(&str, charset);
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**arr;

	arr = ft_split("Hello world", "l ");
	while (*arr)
	{
		printf("%s\n", *(arr++));
	}
}*/
