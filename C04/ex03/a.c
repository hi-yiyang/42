/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:27:49 by yxu               #+#    #+#             */
/*   Updated: 2022/08/17 11:34:20 by yxu              ###   ########.fr       */
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

int	power(int x, int y)
{
	while (--y > 0)
		x *= 10;
	return (x);
}

int	str2int(char *ch, int len, int pos)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (len > 0)
		value += power((ch[i++] - '0'), len--);
	if (pos == -1)
		value = -value;
	return (value);
}

int	ft_atoi(char *str)
{
	int		seq;
	int		pos;
	char	len;
	char	ch[10];

	seq = 0;
	skip_space(str, &seq);
	pos = is_pos(str, &seq);
	len = 0;
	while (str[seq] >= '0' && str[seq] <= '9')
		ch[len++] = str[seq++];
	return (str2int(ch, len, pos));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("	++-++--133742ab567"));
	printf("%d\n", ft_atoi("	     --+101010"));
	printf("%d\n", ft_atoi(" 	+-+-5e3f9"));
}
