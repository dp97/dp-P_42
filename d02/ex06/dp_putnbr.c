void    dp_putchar(char c);

void    dp_putnbr(int nb)
{
    if (nb < 0)
    {
        dp_putchar('-');
        if (nb == -2147483648)
        {
            nb += 2000000000;
            dp_putchar('2');
        }
        dp_putnbr(-nb);
    }
    else if (nb < 10)
        dp_putchar(nb + '0');
    else
    {
        dp_putnbr(nb / 10);
        dp_putchar(nb % 10 + '0');
    }
}
