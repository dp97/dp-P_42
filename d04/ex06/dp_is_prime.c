int     dp_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    if (nb <= 3)
        return (1);
    if (((nb - 1) % 6 == 0) || (nb + 1) % 6 == 0)
        return (1);
    return (0);
}
