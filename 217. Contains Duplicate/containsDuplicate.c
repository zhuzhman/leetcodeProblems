int isDup(int *nums, int index)
{
	int	i;
	int	result;
	
	i = 0;
	result = 0;
	while (i < index)
	{
		if (nums[index] == nums[i])
			return (1);
		i++;
	}
	return (result);
}

bool containsDuplicate(int* nums, int numsSize){
	int	i;
	int	result;
	
	i = 0;
	result = 0;
	while (i < numsSize)
	{
		if (isDup(nums, i))
			return (1);
		i++;
	}
	return (result);
}
