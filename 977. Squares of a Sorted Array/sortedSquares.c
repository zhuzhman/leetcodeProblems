int ft_square(int a)
{
    return (a*a);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int i;
    int low;
    int high;
    int *result;
    
    i = numsSize - 1;
    low = 0;
    high = numsSize - 1;
    *returnSize = numsSize;
    result = (int *)malloc(sizeof(int) * numsSize);
    if (!result)
        return ((void *)0);
    while ((low <= high) && (i >= 0))
    {
        if (ft_square(nums[low]) > ft_square(nums[high]))
        {
            result[i] = ft_square(nums[low]);
            low++;
        }
        else
        {
            result[i] = ft_square(nums[high]);
            high--;
        }
        printf("%d\n", result[i]);
        i--;
    }
    return (result);
}
