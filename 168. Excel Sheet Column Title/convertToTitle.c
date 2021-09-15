
void    ft_set(char *str, int number, int *i)
{
    ++(*i);
    if ((number - 1) == '@')
        number = '[';
    str[*i] = number - 1;
}

void    ft_fill(char *str, int number, int *i)
{
    if (number > 26)
    {
        ft_fill(str, ((number - 1) / 26), i);
    }
    ft_set(str, ((number % 26) + 'A'), i);
}

char * convertToTitle(int columnNumber){
    char    *res;
    int     i;
    
    res = (char *)malloc(sizeof(char) * 8);
    if (!res)
    {
        res = (void *)0;
        return (res);
    }
    i = -1;
    ft_fill(res, columnNumber, &i);
    res[++i] = '\0';
    return (res);
}
