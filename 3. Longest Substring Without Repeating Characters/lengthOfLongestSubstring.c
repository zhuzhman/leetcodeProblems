int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int isDup(char *s, int start, int index, char c)
{
    int i;
    
    i = start - 1;
    while (++i < index)
    {
        if (s[i] == c)
            return (1);
    }
    return (0);
}

int lengthOfLongestSubstring(char * s){
    int head;
    int tail;
    int size;
    int result;
    
    size = ft_strlen(s);
    if (size == 0)
        return (0);
    if (size == 1)
        return (1);
    tail = 0;
    head = 1;
    result = 0;
    
    while (head < size)
    {
        while (isDup(s, tail, head, s[head]))
            tail++;
        head++;
        if (result < (head - tail))
            result = head - tail;
    }
    return (result);
}
