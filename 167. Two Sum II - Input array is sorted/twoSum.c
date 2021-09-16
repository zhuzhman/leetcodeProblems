

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int tail;
    int head;
    int *result;
    
    *returnSize = 2;
    tail = 0;
    head = numbersSize - 1;
    result = (int *)malloc(sizeof(int) * (*returnSize));
    if (!result)
        return ((void *)0);
    if (numbersSize == 2)
    {
        result[0] = 1;
        result[1] = 2;
        return (result);
    }
    while (tail < head)
    {
        if ((numbers[tail] + numbers[head]) == target)
        {
            result[0] = tail + 1;
            result[1] = head + 1;
            return (result);
        }
        if ((numbers[tail] + numbers[head]) > target)
            head--;
        else
            tail++;
    }
    return (result);
}
