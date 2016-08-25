#include <unistd.h>

void    dp_putchar(char c)
{
    write(1, &c, 1);
}
