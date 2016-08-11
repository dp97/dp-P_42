char    *dp_strrev(char *str)
{
    int     i;
    int     len;
    char    temp;
    
    i = -1;
    len = 0;
    while (str[++i])
        len++;
    i = 0;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }
    return (str);
}
