

int searchInsert(int* nums, int numsSize, int target){
    int low;
    int middle;
    int high;
    int result;
    
    low = 0;
    high = numsSize;
    result = numsSize;
    if ((numsSize == 1) && (nums[0] == target))
        return (0);
    if (target > nums[numsSize - 1])
        return (numsSize);
    if (target < nums[0])
        return (0);
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (nums[middle] >= target)
        {
            result = middle;
            high = middle - 1;
        }
        else
            low = middle + 1;
    }
    return (result);
}
