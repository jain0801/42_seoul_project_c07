#include <stdlib.h>

int	check_if_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

int	strchar_len(char *str, char *charset)
{
	int strlen;
	int i;

	strlen = 0;
	i = 0;
	while (str[i])
	{
		if (check_if_charset(str[i], charset) == 1 && i > 0)
		{
			if (check_if_charset(str[i-1], charset) == 0)
				strlen++;
		}
	}
	if (check_if_charset(str[i-1], charset) == 0)
		strlen++;
	return (strlen);
}

int	arr_len(char *str, char *charset, int i)
{
	int len;

	len = 0
	while (check_if_charset(str[i], charset) == 0)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char	*str, char *charset)
{
	char **arr;
	int i;
	int j;
	int k;
	int slen;

	slen = strchar_len(str, charset);
	**arr = (char **)malloc(sizeof(char *) * slen);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (check_if_charset(str[i], charset) == 0)
		{
			slen = arr_len(str, charset, i);
			arr[j] = (char *)malloc(sizeof(char) * (slen + 1));
			k = 0;
			while (k < slen)
			{
				arr[j][k] = str[i];
				k++;
				i++;
			}
			arr[j][k] = '\0';
			j++;
		}
		i++;
	}
	arr[j] = '\0';
}
