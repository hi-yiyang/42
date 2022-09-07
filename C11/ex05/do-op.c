/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:28:23 by yxu               #+#    #+#             */
/*   Updated: 2022/08/24 02:28:34 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	pos;
	int	result;

	i = 0;
	pos = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			pos = -pos;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i++] - '0');
	}
	return (result * pos);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	arithmetic(int n1, int n2, char op)
{
	if (op == '+')
		ft_putnbr(n1 + n2);
	else if (op == '-')
		ft_putnbr(n1 - n2);
	else if (op == '*')
		ft_putnbr(n1 * n2);
	else if (op == '/')
	{
		if (n2 == 0)
			write(1, &"Stop : division by zero", 23);
		else
			ft_putnbr(n1 / n2);
	}
	else if (op == '%')
	{
		if (n2 == 0)
			write(1, &"Stop : modulo by zero", 21);
		else
			ft_putnbr(n1 % n2);
	}
	else
		ft_putchar('0');
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	arithmetic(n1, n2, *argv[2]);
	ft_putchar('\n');
}
