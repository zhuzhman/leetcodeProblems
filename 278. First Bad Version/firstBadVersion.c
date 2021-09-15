// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned int low;
    unsigned int middle;
    unsigned int high;
    unsigned int result;
    
    low = 1;
    high = n;
    result = n;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (isBadVersion(middle))
        {
            result = middle;
            high = middle - 1;
        }
        else
            low = middle + 1;
    }
    return (result);
}
