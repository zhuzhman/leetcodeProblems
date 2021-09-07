#include <unistd.h>
#include "isValid.c"

int isValid(char * s);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (isValid(argv[1]))
			ft_putstr("True\n");
		else
			ft_putstr("False\n");
	}
	ft_putstr("\n");
	return (0);
}
