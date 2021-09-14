

int thirdMax(int* nums, int numsSize){
    int     i;
    int     count;
    long    res1;
    long    res2;
    long    res3;
    
    i = -1;
    count = 0;
    res1 = -3000000000;
    res2 = -3000000000;
    res3 = -3000000000;
    while (++i < numsSize)
    {
        if ((res1 == nums[i])
            || (res2 == nums[i])
            || (res3 == nums[i]))
        {
            // i++;
            continue;
        }
        else if (res1 < nums[i])
        {
            res3 = res2;
            res2 = res1;
            res1 = nums[i];
            count++;
        }
        else if (res2 < nums[i])
        {
            res3 = res2;
            res2 = nums[i];
            count++;
        }
        else if (res3 < nums[i])
        {
            res3 = nums[i];
            count++;
        }
        printf("%d\t%d\t%d\n", res1, res2, res3);
        // i++;
    }
    if (count > 2)
        return (res3);
    return (res1);
}
