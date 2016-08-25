void    dp_putchar(char c);

int     main(int ac, char *av[])
{
    int     i;
    
    i = 0;
    while (av[0][i])
    {
        dp_putchar(av[0][i]);
        i++;
    }
    dp_putchar('\n');
    return (0);
}
