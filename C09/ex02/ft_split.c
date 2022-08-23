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
// #include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	cal_str_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str, charset))
			str++;
	}
	return (count);
}

int	cal_str_len(char *str, char *charset)
{
	int	count;

	count = 0;
	while (str[count] && !is_sep(str[count], charset))
		count++;
	return (count);
}

char	*mk_str(char **str, char *charset)
{
	int		str_len;
	char	*ptr;
	char	*locator;

	str_len = cal_str_len(*str, charset);
	ptr = malloc(sizeof(char) * (str_len + 1));
	if (ptr == 0)
		return (0);
	locator = ptr;
	while (**str && !is_sep(**str, charset))
	{
		*locator = **str;
		locator++;
		(*str)++;
	}
	*locator = '\0';
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		arr_size;
	char	**arr;

	arr_size = cal_str_count(str, charset);
	arr = malloc(sizeof(char *) * (arr_size + 1));
	if (arr == 0)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str && !is_sep(*str, charset))
		{
			arr[i] = mk_str(&str, charset);
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}
/*
int	main(void)
{
	char	**arr;

	arr = ft_split(" Hello world ", "l ");
	while (*arr)
	{
		printf("%s\n", *(arr++));
	}
}*/
