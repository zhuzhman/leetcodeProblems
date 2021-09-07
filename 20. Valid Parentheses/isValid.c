#include <stdlib.h>
#define bool int

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool isValid(char * s){
	char	*temp;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(s);
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
	while (s[i])
	{
		write(1, &s[i], 1);
		write(1, "\n", 1);
		if (s[i] == '(')
		{
			temp[j] = ')';
		write(1, &temp[j], 1);
		write(1, "\n", 1);
			j++;
		}
		else if (s[i] == '[')
		{
			temp[j] = ']';
			j++;
		}
		else if (s[i] == '{')
		{
			temp[j] = '}';
			j++;
		}
		else if ((s[i] == ')') || (s[i] == ']') || (s[i] == '}'))
		{
			if ((j == 0) || (s[i] != temp[j - 1]))
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