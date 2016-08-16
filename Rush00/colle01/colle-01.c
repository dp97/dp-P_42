void    colle(int x, int y)
{
    int     col;
    int     row;
    
    col = 1;
    while (col <= y)
    {
        row = 1;
        while (row <= x)
        {
            if (((row == 1) || (row == x)) && ((col == 1) || (col == y)))
                dp_putchar('o');
            else if ((row > 1) && (row < x) && ((col == 1) || (col == y)))
                dp_putchar('-');
            else if ((row > 1) && (row < x))
                dp_putchar(' ');
            else
                dp_putchar('|');
            row++;
        }
        dp_putchar('\n');
        col++;
    }
}
