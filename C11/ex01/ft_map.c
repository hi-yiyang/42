#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*ptr;
	int	i;

	ptr = malloc(sizeof(int) * length);
	if (ptr == 0 || length < 1)
		return (0);
	i = 0;
	while (i < length)
	{
		ptr[i] = f(tab[i]);
		i++;
	}
	return (ptr);
}
