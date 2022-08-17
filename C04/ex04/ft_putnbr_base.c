/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:27:57 by yxu               #+#    #+#             */
/*   Updated: 2022/08/17 11:34:21 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cal_base_system(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] < 32 || str[i] > 126)
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_posnbr_base(unsigned int n, unsigned int divisor, char *base)
{
	if (n >= divisor)
		put_posnbr_base(n / divisor, divisor, base);
	ft_putchar(base[n % divisor]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	divisor;

	divisor = cal_base_system(base);
	if (divisor >= 2)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			put_posnbr_base(-nbr, divisor, base);
		}
		else
			put_posnbr_base(nbr, divisor, base);
	}
	else
		return ;
}
