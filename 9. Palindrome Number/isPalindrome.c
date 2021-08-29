#include <stdlib.h>
#define bool int

int 	*ft_int_to_array(int x);
int		ft_number_length(int number, int counter);

int	ft_number_length(int number, int counter)
{
	int	sign;

	sign = 1;
	if (number < 0)
	{
		sign *= -1;
		number *= -1;
		++counter;
	}
	if (number > 9)
	{
		counter = ft_number_length(number / 10, counter);
	}
	return (++counter);
}

int *ft_int_to_array(int x)
{
	int	len;
	int	*array;
	int	i;

	len = ft_number_length(x, 0);
	array = (int *)malloc(sizeof(int) * (len));
	if (!array)
		return ((void *)0);
	i = 0;
	while (i < len)
	{
		array[i] = x % 10;
		x /= 10;
		i++;
	}
	return (array);
}

bool	isPalindrome(int x)
{
	int	*temp;
	int	size;
	int	i;

	if (x < 0)
		return (0);
	else
	{
        size = ft_number_length(x, 0) - 1;
	    temp = ft_int_to_array(x);
		i = 0;
		while (i <= size)
		{
			if (temp[i] != temp[size])
				return (0);
			size--;
			i++;
		}
	}
	return (1);
}