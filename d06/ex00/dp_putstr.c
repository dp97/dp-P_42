void    dp_putchar(char c);

void    dp_putstr(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        dp_putchar(str[i]);
        i++;
    }
}
