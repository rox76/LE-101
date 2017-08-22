#include "function.h"

int	ft_find_next_prime(int nb)
{
	int i;
	int x;
	
	x = 0;
	i = 2;
	if (nb <= 1)
	{
		return (2);
	}
	else
	{
		while (i <= 9)
		{
			if (i != x)
			{
				if (x % i == 0)
				{
					if (x >= nb)
					{
						return (x);
					}
				}
			}
			if (i >= 9)
			{
				i = 2;
				x ++;
			}
			else
			{
				i ++;
			}
		}
		return (1);
	}
}

int	main(void)
{
	int i;

	i = 0;

	while (i < 50)
	{
		ft_putnbr(i);
		write(1, " = ", 3);
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
		i ++;
	}
	return (0);
}
