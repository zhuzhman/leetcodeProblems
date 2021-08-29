#include <unistd.h>
#include <stdlib.h>
#define bool int

bool	isPalindrome(int x);
int		isPalindrome2(int x);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char * str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number > 9)
		ft_putnbr((number / 10));
	ft_putchar((number % 10) + '0');
}

int	ft_number_length(int number, int counter);

int *ft_int_to_array(int x);

int	ft_array_to_int(int *array, int size)
{
	int	i;
	int	result;

	i = size;
	result = 0;
	while (--i)
	{
		result = result * 10 + array[i];
	}
	return (result);
}

int	main(void)
{
	int	x;

	x = 121;

	// ft_putnbr(x);
	// ft_putchar('\n');
	// ft_putnbr(ft_number_length(x, 0));
	// ft_putchar('\n');

	ft_putnbr(isPalindrome2(x));
	ft_putchar('\n');
	x = 121;
	if (isPalindrome(x))
		ft_putstr("True!");
	else
		ft_putstr("False!");
	ft_putchar('\n');
	return (0);
}
