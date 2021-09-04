#include "../../school_21/libft/srcs/ft_putstr.c"
#include "longestCommonPrefix.c"

char *longestCommonPrefix(char **strs, int strsSize);

int	main(int argc, char *argv[])
{
	ft_putstr(longestCommonPrefix(argv, argc));
	return (0);
}