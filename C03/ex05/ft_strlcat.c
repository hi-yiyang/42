/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:43:24 by yxu               #+#    #+#             */
/*   Updated: 2022/08/10 20:43:29 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   char str1[] = "He", str2[] = "llo";
   printf("%d\n", ft_strlcat(str1, str2, 0));
   puts(str1);
   puts(str2);
}*/
