#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if ((*range = malloc(sizeof(int) * (max - min))) == 0)
		return (-1);
	size = 0;
	while (min < max)
	{
		(*range)[size++] = min++;
	}
	return (size);
}