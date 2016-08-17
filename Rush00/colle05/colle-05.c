void    dp_putchar(char c);

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
            if ((col == 1 && row == 1) 
                || (col == y && col != 1 && row == x && row != 1))
                dp_putchar('A');
            else if (((col == 1) && (row == x)) || ((col == y) && (row == 1)))
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
