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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	desired;
	unsigned int	i;

	desired = 0;
	while (src[desired] != '\0')
		desired++;
	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (desired);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "Hiiiii";
	char dest[] = "1234567";
	char dest1[] = "1234567";

	printf("%d\n", ft_strlcpy(dest, src, 3));
	printf("%lu\n", strlcpy(dest1, src, 3));
	printf("%s %s\n", dest, dest1);
	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("%lu\n", strlcpy(dest1, src, 5));
	printf("%s %s\n", dest, dest1);
	printf("%d\n", ft_strlcpy(dest, src, 7));
	printf("%lu\n", strlcpy(dest1, src, 7));
	printf("%s %s\n", dest, dest1);
}*/
