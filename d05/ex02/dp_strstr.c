char    *dp_strstr(char *str, char *to_find)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (str[i])
    {
        while (to_find[j] == str[i] && to_find[j] && str[i])
        {
            i++;
            j++;
        }
        if (!(to_find[j]))
            return (str + i - j);
        i -= (j - 1);
        j = 0;
    }
    return (0);
}
