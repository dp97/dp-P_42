int     dp_atoi(char *str)
{
    int     sint;
    int     i;

    sint = 0;
    i = 0;
    while ((str[i] >= 48) && (str[i] < 58))
    {
        sint *= 10;
        sint += str[i] - '0';
        i++;
    }
    return (sint);
}
