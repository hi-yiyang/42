#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int *dest;
	
	if (min >= max)
		return (0);
	if ((ptr = malloc(sizeof(int) * (max - min))) == 0)
		return (0);
	dest = ptr;
	while (min < max)
	{
		*(ptr++) = min++;
	}
	return (dest);
}