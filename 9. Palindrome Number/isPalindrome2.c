int	isPalindrome2(int x)
{
	int	div;

	if (x < 0)
		return (0);
	div = 1;
	while (x >= 10 * div)
		div *= 10;
	while (x)
	{
		if (x / div != x % 10)
			return (0);
		x = (x % div) / 10;
		div /= 100;
	}
	return (1);
}