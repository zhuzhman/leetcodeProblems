#include "plusOne.c"
#include "../../school_21/libft/srcs/ft_putchar.c"
#include "../../school_21/libft/srcs/ft_putstr.c"
#include "../../school_21/libft/srcs/ft_putnbr.c"

int *plusOne(int *digits, int digitsSize, int *returnSize);

int	main(void)
{
	int	i;
	int	numbers[100] = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
	int	digitsSize = 28;
	int	returnSize;
	int	*for_print;
	// int	numbers1[100] = {1,2,3};

	i = 0;
	while (i < digitsSize)
	{
		ft_putnbr(numbers[i++]);
	}
	for_print = plusOne(numbers, digitsSize, &returnSize);
	// plusOne(numbers1, 4, &returnSize);
	i = 0;
	ft_putchar('\n');
	while (i < returnSize)
	{
		ft_putnbr(for_print[i++]);
	}
	ft_putchar('\n');
	return (0);
}