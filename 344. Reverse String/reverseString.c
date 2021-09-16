void	ft_str_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void reverseString(char* s, int sSize){
    int	i;

	i = 0;
	while (i < sSize)
		ft_str_swap(&s[i++], &s[--sSize]);
}
