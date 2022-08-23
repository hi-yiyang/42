/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:28:00 by yxu               #+#    #+#             */
/*   Updated: 2022/08/11 23:28:07 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_space(char *str, int *seq)
{
	char	c;

	while (str[*seq])
	{
		c = str[*seq];
		if (c == ' ' || c == '\n' || c == '\r')
			(*seq)++;
		else if (c == '\f' || c == '\t' || c == '\v')
			(*seq)++;
		else
			break ;
	}
	return (*seq);
}

int	is_pos(char *str, int *seq)
{
	int	pos;

	pos = 1;
	while (str[*seq])
	{
		if (str[*seq] == '-')
		{
			pos = -pos;
			(*seq)++;
		}
		else if (str[*seq] == '+')
			(*seq)++;
		else
			break ;
	}
	return (pos);
}

int	cal_base_system(char *str)
{
	int	i;
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '+' || *str == '-')
			return (0);
		i = count;
		while (i > 0)
		{
			if (*str == *(str - i--))
				return (0);
		}
		str++;
		count++;
	}
	return (count);
}

int	str2int(char *str, int *seq, char *base, int base_system)
{
	int	i;
	int	result;

	result = 0;
	while (str[*seq])
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == str[*seq])
			{
				result = result * base_system + i;
				break ;
			}
			i++;
		}
		if (base[i] == '\0')
			return (result);
		(*seq)++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	seq;
	int	pos;
	int	base_system;
	int	result;

	seq = 0;
	skip_space(str, &seq);
	pos = is_pos(str, &seq);
	base_system = cal_base_system(base);
	if (base_system < 2)
		return (0);
	result = str2int(str, &seq, base, base_system);
	if (pos == -1)
		result = -result;
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("	++-++--133742ab567", "0123456789"));
	printf("%d\n", ft_atoi_base("	     --+101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+-+-5e3f9", "0123456789abcdef"));
}

// int	cal_base_system(char *str)
// {
// 	char	existing[20] = "+- ";
// 	int		i;
// 	int		output;

// 	output = 0;
// 	while (*str != '\0')
// 	{
// 		i = 0;
// 		while (existing[i])
// 		{
// 			if (existing[i++] == *str)
// 				return (0);
// 		}
// 		existing[i] = *(str++);
// 		output++;
// 	}
// 	return (output);
// }