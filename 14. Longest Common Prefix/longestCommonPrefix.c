int	ft_get_smallest_str(char **strs, int strsSize)
{
	int	len;
	int	i;
	int	j;
	
	len = 200;
	i = 0;
	while (i < strsSize)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		if (j < len)
			len = j;
		i++;
	}
	return (len + 1);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*longestCommonPrefix(char ** strs, int strsSize)
{
	char	letter;
	int		i;
	int		j;
	char	*temp;
	
	letter = strs[0][0];
	if (letter)
	{
		temp = (char *) malloc (sizeof(char) * 201);
		if (!temp)
			return ((void *)0);
		i = 0;
		while (i < ft_get_smallest_str(strs, strsSize))
		{
			j = 0;
			letter = strs[j][i];
			temp[i] = '\0';
			while (j < strsSize)
			{
				if (strs[j][i] != letter)
						return (temp);
				j++;
			}
			temp[i] = letter;
			i++;
		}
        temp[i] = '\0';
	}
	else
		return ("");
	return (temp);
}