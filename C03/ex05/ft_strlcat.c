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
	unsigned int	sum;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i > size)
		return (size + j);
	sum = i + j;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sum);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   char str1[] = "He", str2[] = "llo";
   printf("%d\n", ft_strlcat(str1, str2, 5));
   puts(str1);
   puts(str2);
}*/
