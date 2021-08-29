#include "../../school_21/libft/srcs/ft_putchar.c"
#include "../../school_21/libft/srcs/ft_putstr.c"
#include "../../school_21/libft/srcs/ft_putnbr.c"
#include "romanToInt.h"

int main(void)
{
	ft_putstr("The number in roman is:\t\"LVIII\"\nIn int it will be:\t");
	ft_putnbr(romanToInt("LVIII"));
	ft_putchar('\n');
	return (0);
}
