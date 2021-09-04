int ft_pow(int pow)
{
    int result;
    int i;
    
    result = 1;
    i = 0;
    while (i < pow)
    {
        result *= 2;
        i++;
    }
    return (result);
}

bool isPowerOfTwo(int n){
    int i;
    
    i = 0;
    while (i < 31)
    {
        if (ft_pow(i) == n)
            return (1);
        i++;
    }
    return (0);
}