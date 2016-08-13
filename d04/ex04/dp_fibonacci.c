int     dp_fibonacci(int index)
{
    if (index <= 0)
        return (0);
    if (index == 1)
        return (1);
    return (dp_fibonacci(index - 1) + dp_fibonacci(index - 2));
}
