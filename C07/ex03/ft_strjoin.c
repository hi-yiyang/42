/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:38:37 by yxu               #+#    #+#             */
/*   Updated: 2022/08/16 23:38:39 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*mk_str(int size, char **strs, char *sep)
{
	int		i;
	int		sep_len;
	int		tot_len;
	char	*ptr;

	i = 0;
	sep_len = ft_strlen(sep);
	tot_len = 0;
	while (i < size)
		tot_len += ft_strlen(strs[i++]) + sep_len;
	tot_len -= sep_len;
	ptr = malloc(sizeof(char) * (tot_len + 1));
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	char	*locator;

	if (size == 0)
		return (malloc(sizeof(char)));
	ptr = mk_str(size, strs, sep);
	if (ptr == 0)
		return (0);
	locator = ptr;
	i = 0;
	while (i < size)
	{
		locator = ft_strcpy(locator, strs[i]) + ft_strlen(strs[i]);
		if (i < size - 1)
			locator = ft_strcpy(locator, sep) + ft_strlen(sep);
		i++;
	}
	return (ptr);
}
