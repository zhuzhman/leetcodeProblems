#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	isValid(char *str)
{
	char	*temp;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(str);
	if (size < 2)
		return (0);
    temp = (char *)malloc(sizeof(char) * (size + 1));
    if (!temp)
        temp = ((void *)0);
	i = 0;
	while (i <= size)
	{
		temp[i] = '\0';
		i++;
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		write(1, "\n", 1);
		if (str[i] == '(')
		{
			temp[j] = ')';
		write(1, &temp[j], 1);
		write(1, "\n", 1);
			j++;
		}
		else if (str[i] == '[')
		{
			temp[j] = ']';
			j++;
		}
		else if (str[i] == '{')
		{
			temp[j] = '}';
			j++;
		}
		else if ((str[i] == ')') || (str[i] == ']') || (str[i] == '}'))
		{
			if ((j == 0) || (str[i] != temp[j - 1]))
			{
				free(temp);
				return (0);
			}
			temp[j] = '\0';
			j--;
		}
		i++;
	}
	// str = (void *)0;
	free(temp);
	if (j)
		return (0);
	return (1);
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