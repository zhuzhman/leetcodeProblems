int hammingWeight(uint32_t n) {
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (i < 32)
	{
		if (n & 1)
			count++;
		n >>= 1;
		i++;
	}
	return (count);
}
