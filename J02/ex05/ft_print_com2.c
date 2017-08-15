#include "function.h"

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	while (a <= '9')
	{
		if (d > b)
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			if (!(a == '9' && b == '8'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (a == '9' && (b == '7' || b == '8') && c == '9' && d == '9')
		{
			b ++;
		}
		else
		{
			d ++;
			if (d > '9')
			{
				c ++;
				d = '0';
				if (c > '9')
				{
					c = '0';
					b ++;
					if (b > '9')
					{
						a ++;
						b = '0';
					}
				}
			}
		}

	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
