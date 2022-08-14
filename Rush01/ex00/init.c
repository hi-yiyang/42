#include <unistd.h>
#include <stdlib.h>

#define MAP_SIZE 4

void	put(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	malloc_2d_int_array(void)
{
	int	*ptr;
	
	malloc()
}

int	malloc_3d_int_array(void)
{

}