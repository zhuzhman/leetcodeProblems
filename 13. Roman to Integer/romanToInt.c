int	ft_get_num(char c)
{
	int	result;

	if (c == 'I')
		return (1);
	if (c == 'V')
		return (5);
	if (c == 'X')
		return (10);
	if (c == 'L')
		return (50);
	if (c == 'C')
		return (100);
	if (c == 'D')
		return (500);
	if (c == 'M')
		return (1000);
	else
		return (0);
}

int	romanToInt(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == 'V' || s[i] == 'X')
		{
			if (i > 0 && s[i - 1] == 'I')
				result -= 2;
		}
		if (s[i] == 'L' || s[i] == 'C')
		{
			if (i > 0 && s[i - 1] == 'X')
				result -= 20;
		}
		if (s[i] == 'D' || s[i] == 'M')
		{
			if (i > 0 && s[i - 1] == 'C')
				result -= 200;
		}
		result += ft_get_num(s[i]);
		i++;
	}
	return (result);
}