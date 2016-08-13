int     dp_iterative_factorial(int nb)
{
    int     result;
    
    result = 1;
    if (nb > 0)
    {
        while (nb)
        {
            result *= nb;
            nb--;
        }
    }
    else
        return (0);
    return (result);
}
