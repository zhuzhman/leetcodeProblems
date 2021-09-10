int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2, int index, int len)
{
	int	i;
	int j;

	j = 0;
	i = index;
	while (i < index + len)
	{
		if ((s1[i] - s2[j]))
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}

int strStr(char * haystack, char * needle){
	int ohl;
	int hl;
	int nl;
	int i;
	
	ohl = ft_strlen(haystack);
	nl = ft_strlen(needle);
	hl = ohl;
	if (nl == 0)
		return (0);
	i = 0;
	while (haystack[i])
	{
		if (nl > hl)
			return (-1);
		if ((haystack[i] == needle[0]) && ((i + nl) <= ohl) && (!ft_strcmp(haystack, needle, i, nl)))
			return (i);
		i++;
	}
	if (i == ft_strlen(haystack))
		return (-1);
	return (i);
}