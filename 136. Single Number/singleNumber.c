int isTwice(int *nums, int x, int numsSize)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while (i < numsSize)
    {
        if (nums[i] == x)
            count++;
        i++;
    }
    return (count);
}

int singleNumber(int* nums, int numsSize){
    int i;
    int result;
    
    i = 0;
    result = nums[0];
    while (i < numsSize)
    {
        if (isTwice(nums, nums[i], numsSize) == 1)
            result = nums[i];
        i++;
    }
    return (result);
}