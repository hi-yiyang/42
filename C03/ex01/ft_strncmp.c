int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && n)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d", strncmp("H", "He", 1));
	printf("\n%d", ft_strncmp("H", "He", 1));
}