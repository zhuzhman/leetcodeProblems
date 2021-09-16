void	ft_int_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int i, int size)
{
	while (i < size)
		ft_int_swap(&tab[i++], &tab[--size]);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while(*str)
// 		write(1, str++, 1);
// }

// void	ft_putnbr(int number)
// {
// 	if (number == -2147483648)
// 	{
// 		ft_putstr("-2147483648");
// 		return ;
// 	}
// 	if (number < 0)
// 	{
// 		ft_putchar('-');
// 		number *= -1;
// 	}
// 	if (number > 9)
// 		ft_putnbr((number / 10));
// 	ft_putchar((number % 10) + '0');
// }

// void	ft_put_int_tab(int *tab, int size)
// {
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_putnbr(tab[i]);
// 		i++;
// 	}
// }

void rotate(int* nums, int numsSize, int k){
    int i;
    
    i = 0;
    k = k % numsSize;
    // ft_put_int_tab(nums, numsSize);
    ft_rev_int_tab(nums, 0, numsSize);
    ft_rev_int_tab(nums, 0, k);
    ft_rev_int_tab(nums, k, numsSize);
    // ft_put_int_tab(nums, numsSize);
}
