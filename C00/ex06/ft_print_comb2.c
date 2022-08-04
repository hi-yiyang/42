/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiyang <yxu@student.42abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:10:01 by yiyang            #+#    #+#             */
/*   Updated: 2022/08/04 00:47:52 by yiyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print2write(int i){
	char dig1;
	char dig2;
	
	dig1 = i/10 + 48;
	dig2 = i%10 + 48;
	
	write(1, &dig1, 1);
	write(1, &dig2, 1);
}

void ft_print_comb2(void){
	int a;
	int b;

	a = 0;

	while(a <= 99){
		b = a + 1;
		while(b <= 99){
			print2write(a);
			write(1, " ", 1);
			print2write(b);
			if(!(a==98&&b==99)) write(1, ", ", 2);
			b++;
		}
		a++;
	}
}