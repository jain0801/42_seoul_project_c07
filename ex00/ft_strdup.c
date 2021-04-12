#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int len;
	int i;

	len = 0;
	while(src[len])
		len++;
	str = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
