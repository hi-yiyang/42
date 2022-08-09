int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d", strcmp("H", "He"));
	printf("\n%d", strcmp("Hello\200", "Hello\0"));
	printf("\n%d", ft_strcmp("H", "He"));
	printf("\n%d", ft_strcmp("Hello\200", "Hello\0"));
}