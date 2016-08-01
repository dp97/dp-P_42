void    dp_putchar(char c);

void    dp_is_negative(int n)
{
    if (n >= 0)
        dp_putchar('P');
    else
        dp_putchar('N');
}
