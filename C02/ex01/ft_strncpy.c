/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:01:36 by yxu               #+#    #+#             */
/*   Updated: 2022/08/08 23:57:25 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "Hello";
	char dest[] = "1234567";
	char dest1[] = "1234567";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest1, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", strncpy(dest1, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 7));
	printf("%s\n", strncpy(dest1, src, 7));
}*/
