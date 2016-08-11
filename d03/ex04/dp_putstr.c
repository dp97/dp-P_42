void    dp_putchar(char c);

void    dp_putstr(char *str)
{
    while (*str)
    {
        dp_putchar(*str);
        str++;
    }
}
