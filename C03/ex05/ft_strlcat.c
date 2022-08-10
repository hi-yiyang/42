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
	unsigned int	sum;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	sum = i + j;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (sum);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   char str1[100] = "He", str2[] = "llo";
   printf("%d\n", ft_strlcat(str1, str2, 4));
   puts(str1);
   puts(str2);
}*/
