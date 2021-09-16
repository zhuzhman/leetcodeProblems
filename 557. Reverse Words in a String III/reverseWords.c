int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_str_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void reverseString(char* s, int start, int sSize){
    int	i;

	i = start;
	while (i < sSize)
		ft_str_swap(&s[i++], &s[--sSize]);
}

char * reverseWords(char * s){
    int sSize;
    int tail;
    int head;
    
    tail = 0;
    head = 0;
    sSize = ft_strlen(s);
    while (tail < sSize)
    {
        while ((head < sSize) && (s[head] != ' '))
        {
            head++;
        }
        reverseString(s, tail, head);
        tail = head + 1;
        head = tail;
    }
    return (s);
}
