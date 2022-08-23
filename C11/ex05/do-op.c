#include <unistd.h>

int	str2int(char *str)
{
	int	i;
	int	pos;
	int	value;

	i = 0;
	pos = 1;
	value = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos = -pos;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * pos);
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
	n1 = str2int(argv[1]);
	n2 = str2int(argv[3]);
	arithmetic(n1, n2, *argv[2]);
	ft_putchar('\n');
}
