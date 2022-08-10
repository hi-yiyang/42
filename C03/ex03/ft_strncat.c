char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   char str1[100] = "This is ", str2[] = "programiz.com";
   ft_strncat(str1, str2, 3);
   puts(str1);
   puts(str2);
}*/