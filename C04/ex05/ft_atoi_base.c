/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:28:00 by yxu               #+#    #+#             */
/*   Updated: 2022/08/14 23:58:05 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	char2int(char *str, int start, char *base, int base_system)
{
	int	j;
	int	result;

	result = 0;
	while (str[start] != '\0')
	{
		j = 0;
		while (base[j])
		{
			if (str[start] == base[j])
			{
				result = result * base_system + j;
				break ;
			}
			j++;
		}
		if (base[j] == '\0')
			return (result);
		start++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	pos;
	int	base_system;

	i = 0;
	pos = 1;
	base_system = cal_base_system(base);
	if (base_system < 2)
		return (0);
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			pos = -pos;
	}
	return (char2int(str, i, base, base_system) * pos);
}
