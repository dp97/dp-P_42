void    dp_putchar(char c);

void    print(int a)
{
    char    x;
    char    y;
    
    y = (a % 10) + '0';
    a /= 10;
    x = (a % 10) + '0';
    dp_putchar(x);
    dp_putchar(y);
}

void    ok(int a, int b)
{
    print(a);
    dp_putchar(' ');
    print(b);
    if ((a != 98) || (b != 99))
    {
        dp_putchar(',');
        dp_putchar(' ');
    }
}

void	dp_print_comb2(void)
{
    int     a;
    int     b;
    
    a = 00;
    b = 00;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ok(a, b);
            b++;
        }
        a++;
    }
}
