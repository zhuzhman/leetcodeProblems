#include <stdlib.h>
#include <stdio.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
	int	i;
	int	*temp;

	i = digitsSize - 1;
	while (i >= 0)
	{
		if (digits[i] != 9)
		{
			digits[i]++;
			break ;
		}
		else
			digits[i] = 0;
		i--;
	}
	if (!digits[0])
	{
		*returnSize = digitsSize + 1;
		temp = (int *) malloc (sizeof(int) * (*returnSize));
		if (!temp)
			return ((void *)0);
		temp[0] = 1;
		i = 1;
		while (i < *returnSize)
		{
			temp[i] = digits[i - 1];
			i++;
		}
		return (temp);
	}
	*returnSize = digitsSize;
	return (digits);
}
