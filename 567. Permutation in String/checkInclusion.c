int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int isPermutated(int *a, int *b)
{
    int i;
    
    i = -1;
    while (++i < 26)
    {
        if (a[i] != b[i])
            return (0);
    }
    return (1);
}

bool checkInclusion(char * s1, char * s2){
    int size1;
    int size2;
    int i;
    int *array1;
    int *array2;
    
    size1 = ft_strlen(s1);
    size2 = ft_strlen(s2);
    if ((size1 > size2) || (size1 == 0) || (size2 == 0))
        return (0);
    
    array1 = (int *)malloc(sizeof(int) * 26);
    array2 = (int *)malloc(sizeof(int) * 26);
    
    i = -1;
    while (++i < size1)
    {
        array1[(s1[i] - 'a')] += 1;
        array2[(s2[i] - 'a')] += 1;
    }
              
    i = -1;
    while (++i < (size2 - size1))
    {
        if (isPermutated(array1, array2))
            return (1);
        array2[(s2[i] - 'a')] -= 1;
        array2[(s2[i + size1] - 'a')] += 1;
    }
    
    if (isPermutated(array1, array2))
        return (1);
    
    free(array1);
    free(array2);
    return (0);
}
