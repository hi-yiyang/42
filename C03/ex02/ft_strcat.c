char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
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
   ft_strcat(str1, str2);
   puts(str1);
   puts(str2);
}*/