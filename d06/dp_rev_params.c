int     dp_strlen(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(int ac, char *av[])
{
    int     i;
    int     j;
    
    j = 1;
    while (j < ac)
    {
        i = dp_strlen(&(*av[j]));
        while (i >= 0)
        {
            dp_putchar(av[j][i]);
            i--;
        }
        dp_putchar('\n');
        j++;
    }
    return (0);
}
