#include <unistd.h>
int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}
void ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		nbr += '0';
		write(1, &nbr, 1);
	}
}
void ft_sort_integer_table (int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j ++;
		}
		i++;
	}
}
int main (void)
{
	int tablo[10];
	int a;
	
	a = 0;
	tablo[0] = 15;
	tablo[1] = 9;
	tablo[2] = 8;
	tablo[3] = 7;
	tablo[4] = 6;
	tablo[5] = 5;
	tablo[6] = 4;
	tablo[7] = 3;
	tablo[8] = 2;
	tablo[9] = 1;
	ft_sort_integer_table (tablo, 10);
	while (a < 10)
	{
		ft_putnbr(tablo[a]);
		ft_putchar('\n');
		a ++;
	}
	ft_putchar('\n');
	return (0);
}
