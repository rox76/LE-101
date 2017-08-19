#include "function.h"


void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
		{
			i = 0;
		}
	}
}

int	main(void)
{
	int	tablo[10];
	int	i;
	i = 10;
	int a;
	a = 0;
	
	tablo[0] = 10;
	tablo[1] = 9;
	tablo[2] = 8;
	tablo[3] = 7;
	tablo[4] = 6;
	tablo[5] = 5;
	tablo[6] = 4;
	tablo[7] = 3;
	tablo[8] = 2;
	tablo[9] = 1;

	while (a < 10)
	{
		ft_putnbr(*(tablo + a));
		a ++;
	}
	

	ft_sort_integer_table(tablo, i);
	ft_putchar('\n');
	while (a < 10)
	{
		ft_putnbr(*(tablo + a));
		a ++;
	}
	
	ft_putchar('\n');
	return (0);
}
