#include "function.h"

void	ft_print_combn(int n)
{
	int i;
	int tablo[n][10];
	int y;
	int x;
	int w;
	
	i = 0;
	y = 0;
	x = 0;
	w = 0;

	while (i < n)
	{
		tablo[i][y] = y + 48;
		if (!(i - 1 < 0) && (tablo [i][y] > tablo [i - 1][y]))
		{
			while(x < i)
			{
				ft_putchar(tablo[x][w]);
				w ++;
				if (w == 9)
				{
					w = 0;
					x ++;
				}
			}
			x = 0;
		}
		y ++;
		if (y == 9)
		{
			i ++;
		}

	}
}

int	main(void)
{
	ft_print_combn(2);
	ft_putchar('\n');
	return (0);
}
