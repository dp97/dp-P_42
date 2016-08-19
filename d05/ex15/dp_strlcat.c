unsigned int    dp_strlcat(char *dest, char *src, unsigned int size)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j] && j < size)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i + j);
}
