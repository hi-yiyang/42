/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:18:44 by yxu               #+#    #+#             */
/*   Updated: 2022/08/04 19:30:56 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ascend(char cb, int n, int dig)
{
   	

void ft_print_combn(int n)
{
	char cb[n];
	int dig = 1;

	cb[0] = 0;
	while (dig <= n-1)
	{
		if 
		cb[dig] = cb[dig-1] + 1;
		dig++;
		//write(1, &cb, n-1);
	}
}

int	main(void)
{
	ft_print_combn(3);
}
