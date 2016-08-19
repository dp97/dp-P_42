int     dp_strncmp(char *s1, char *s2, unsigned int n)
{
    while (n--)
    {
        if (*s1++ != *s2++)
            return *(s1 - 1) - *(s2 - 1);
    }
    return (0);
}
