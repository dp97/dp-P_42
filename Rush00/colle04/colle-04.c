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
            if ((row == 1) && ((col == 1) || (col == y)))
                dp_putchar('A');
            else if ((row == x) && ((col == 1) || (col == y)))
                dp_putchar('C');
            else if ((row > 1) && (row < x) && (col > 1) && (col < y))
                dp_putchar(' ');
            else
                dp_putchar('B');
            row++;
        }
        dp_putchar('\n');
        col++;
    }
}
