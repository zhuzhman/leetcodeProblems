void	ft_int_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void moveZeroes(int* nums, int numsSize){
    int head;
    int tail;
    
    head = 0;
    tail = 0;
    if ((numsSize == 1) || (numsSize == 0))
        return ;
    while (head < numsSize)
    {
        if (nums[head])
        {
            ft_int_swap(&nums[tail], &nums[head]);
            tail++;
        }
        head++;
    }
}
