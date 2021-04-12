#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int len;
	int i;

	len = max - min;
	i = 0;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * len);
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return len;
}
