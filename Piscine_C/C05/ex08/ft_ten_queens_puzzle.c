#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_ten_queens_puzzle_test(int table[10], int x, int y)
{
	int	i;

	i = -1;
	while (++i < x)
		if (y == table[i] ||
				i + table[i] == x + y ||
				i - table[i] == x - y)
			return (0);
	return (1);
}

void	ft_ten_queens_puzzle_recur(int table[10], int *res, int pos)
{
	int	i;
	int	j;

	i = -1;
	if (pos == 10)
	{
		*res += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(table[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		while (++i < 10)
			if (ft_ten_queens_puzzle_test(table, pos, i))
			{
				table[pos] = i;
				ft_ten_queens_puzzle_recur(table, res, pos + 1);
			}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];
	int	i;
	int	res;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	res = 0;
	ft_ten_queens_puzzle_recur(table, &res, 0);
	return (res);
}
