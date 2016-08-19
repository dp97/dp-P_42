char    *dp_strcapitalize(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] >= 65 && str[i] <= 90)
                str[i] += 32;
            if (!((str[i - 1] >= 65 && str[i - 1] <= 122)
            || (str[i - 1] >= 48 && str[i - 1] <= 57)))
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}
