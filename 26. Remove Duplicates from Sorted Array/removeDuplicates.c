int isDup(int *nums, int index)
{
	int	i;
	
	i = -1;
	while (++i < index)
	{
		if (nums[i] == nums[index])
			return (1);
	}
	return (0);
}

int removeDuplicates(int* nums, int numsSize){
	int	i;
	int	res;
	
	i = 0;
	res = 0;
	while (i < numsSize)
	{
		if (!isDup(nums, i))
		{
			nums[res] = nums[i];
			res++;
		}
		i++;
	}
	return (res);
}