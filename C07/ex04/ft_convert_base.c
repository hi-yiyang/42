/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:32:47 by yxu               #+#    #+#             */
/*   Updated: 2022/08/17 11:32:49 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	cal_base_system(char *str);
int	ft_atoi_base(char *str, char *base);

int	count_digit_base(int nbr, unsigned int base_sys)
{
	int				dig;
	unsigned int	n;

	dig = 0;
	if (nbr < 0)
	{
		n = -nbr;
		dig++;
	}
	else
		n = nbr;
	while (n >= base_sys)
	{
		n /= base_sys;
		dig++;
	}
	dig++;
	return (dig);
}

void	nbr2str_base(int decimal, int base_sys, char *base, char *ptr)
{
	int				pos;
	unsigned int	n;

	if (decimal < 0)
	{
		n = -decimal;
		pos = -1;
	}
	else
		n = decimal;
	while (n >= base_sys)
	{
		*--ptr = base[n % base_sys];
		n = n / base_sys;
	}
	*--ptr = base[n % base_sys];
	if (pos == -1)
		*--ptr = '-';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	int		base_sys;
	int		dig;
	char	*ptr;

	if (cal_base_system(base_from) < 2 || cal_base_system(base_to) < 2)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	base_sys = cal_base_system(base_to);
	dig = count_digit_base(decimal, base_sys);
	ptr = malloc(sizeof(char) * (dig + 1));
	if (ptr == 0)
		return (0);
	*(ptr + dig) = '\0';
	nbr2str_base(decimal, base_sys, base_to, ptr + dig);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_convert_base("    +-+---2147483648",
		"0123456789", "01234567"));
}*/
