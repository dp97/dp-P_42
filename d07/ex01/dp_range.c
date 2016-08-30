int     *dp_range(int min, int max)
{
    int     *val;
    int     i;
    
    i = 0;
    if (min >= max)
        return (NULL);
    val = (int*)malloc(sizeof(*val) * (max - min));
    while (min < max)
    {
        val[i] = min;
        i++;
        min++;
    }
    val[i] = '\0';
    return (val);
}
