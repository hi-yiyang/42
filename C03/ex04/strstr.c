char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	char	*result;

	if (*to_find == '\0')
		return (str);
	needle = to_find;
	while (*str)
	{
		if (*str == *to_find)
		{
			result = str;
			while (*str == *to_find)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (result);
			else
				needle = to_find;
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";
	puts(strstr(largestring, smallstring));
	puts(ft_strstr(largestring, smallstring));
}*/