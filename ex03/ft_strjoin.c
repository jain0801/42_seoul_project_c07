#include <stdlib.h>

int	full_size(int size, char **strs, char *sep)
{
	int flen;
	int seplen;
	int i;
	int j;

	flen = 0;
	seplen = 0;
	i = 0;
	while (sep[seplen])
		seplen++;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
			flen++;
		flen += seplen;
	}
	return (flen);
}

void	join_it(int size, char **strs, char *arr, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			arr[k] = str[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] && i != (size - 1))
		{
			arr[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int	full_len;
	int	i;

	if (size == 0)
	{
		arr = malloc(sizeof(char));
		*str = NULL;
		return str;
	}
	i = 0;
	full_len = full_size(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * full_len);
	join_it(size, strs, arr, sep);
	return (arr);
}
