/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:25:50 by yxu               #+#    #+#             */
/*   Updated: 2022/08/09 15:25:55 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			out[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			c = str[i];
			out[0] = '\\';
			out[1] = "0123456789abcdef"[c / 16];
			out[2] = "0123456789abcdef"[c % 16];
			write(1, &out, 3);
		}
		i++;
	}
}
/*
int main (void)
{
	ft_putstr_non_printable("Coucou\n tu vas bie\t\v\0extra");
	ft_putstr_non_printable("");
}*/
