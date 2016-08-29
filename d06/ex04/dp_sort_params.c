void	dp_putchar(char c);

void	dp_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		dp_putchar(str[i]);
		i++;
	}
}

int     dp_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
    int     i;
    char    *temp;
    
    i = 1;
	while (i < argc - 1)
	{
	    if (dp_strcmp(argv[i], argv[i + 1]) > 0)
	    {
	        temp = argv[i];
	        argv[i] = argv[i + 1];
	        argv[i + 1] = temp;
	        i = 0;
	    }
	    i++;
	}
	i = 1;
	while (argc > i)
	{
	    dp_putstr(argv[i]);
	    dp_putchar('\n');
	    i++;
	}
	return (0);
}
