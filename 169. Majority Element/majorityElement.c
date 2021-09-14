int majorityElement(int* nums, int numsSize){
    int i;
    int count;
    int res;
    
    i = 0;
    count = 0;
    res = 0;
    while (i < numsSize)
    {
        if (count == 0) 
        {
            res = nums[i];
            count++;
        } 
        else 
        {
            if (res == nums[i])
                count++;
            else
                count--;
        }
        i++;
    }
    return res;
}
