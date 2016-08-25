void    dp_putchar(char c);

int     main(int ac, char *av[])
{
    int     i;
    int     j;
    
    j = 1;
    while (j < ac)
    {
        i = 0;
        while (av[j][i])
        {
            dp_putchar(av[j][i]);
            i++;
        }
        dp_putchar('\n');
        j++;
    }
    return (0);
}
