int     dp_str_is_printable(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 0 && str[i] <= 31)
            return (0);
        i++;
    }
    return (1);
}
