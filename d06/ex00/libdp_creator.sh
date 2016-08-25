gcc -Wall -Werror -Wextra -c dp_putchar.c dp_swap.c dp_putstr.c dp_strcmp.c dp_strlen.c
ar rc libdp.a dp_putchar.o dp_swap.o dp_putstr.o dp_strcmp.o dp_strlen.o
rm *.o
