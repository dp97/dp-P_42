int     count(int i)
{
	if (i == 92)
		return (i);
	else
		return (find_eight_queens_puzzle(i + 1));
}

int     dp_eight_queens_puzzle(void)
{
	return (count(1));
}
