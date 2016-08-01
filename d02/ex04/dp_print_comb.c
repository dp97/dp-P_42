void    dp_putchar(char c);

void    ok(char a, char b, char c)
{
    dp_putchar(a);
    dp_putchar(b);
    dp_putchar(c);
    if ((a != '7') || (b != '8') || (c != '9'))
    {
        dp_putchar(',');
        dp_putchar(' ');
    }
}

void    dp_print_comb(void)
{
    char     a;
    char     b;
    char     c;
    
    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ok(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}
