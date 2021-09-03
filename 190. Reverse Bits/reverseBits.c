uint32_t reverseBits(uint32_t n) {
	int				i;
	unsigned long	result;
	
	i = 0;
	while (i < 32)
	{
		result <<= 1;
		result = result + (n & 1);
		n >>= 1;
		i++;
	}
	return (result);
}
