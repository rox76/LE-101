#include "function.h"

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		while (i <= 9)
		{
			if (i != nb)
			{
				if (nb % i == 0)
				{
					return (0);
				}
			}
			i ++;
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
		ft_putnbr(ft_is_prime(i));
		ft_putchar('\n');
		i ++;
	}
	ft_putchar('\n');
	return (0);
}
