void    dp_putchar(char c);

void    ok(char a, char b, char c, char d)
{
    dp_putchar(a);
    dp_putchar(b);
    dp_putchar(' ');
    dp_putchar(c);
    dp_putchar(d);
    if ((a != '9') || (b != '8') || (c != '9') || (d != '9'))
    {
        dp_putchar(',');
        dp_putchar(' ');
    }
}

void	dp_print_comb2(void)
{
    char    a;
    char    b;
    char    c;
    char    d;
    
    a = '0';
    b = '0';
    while (a <= '9')
    {
        if (b > '9')
        {
            a++;
            b = '0';
        }
        c = a;
        if (b == '9')
            c++; 
        d = b + 1;
        if (b == '9')
            d = '0';
        while (c <= '9')
        {
            ok(a, b, c, d);
            d++;
            if (d > '9')
            {
                c++;
                d = '0';
            }
        }
        b++;
    }
}
