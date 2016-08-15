int     dp_find_next_prime(int nb)
{
    int     i;
    
    if (nb <= 1)
        return (0);
    else if (nb <= 3)
        return (1);
    else if ((nb % 2 == 0) || (nb % 3 == 0))
        return dp_find_next_prime(nb + 1);
    i = 5;
    while (i * i <= nb)
    {
        if ((nb % i == 0) || (nb % (i + 2) == 0))
            return dp_find_next_prime(nb + 1);
        i += 6;
    }
    return (nb);
}
