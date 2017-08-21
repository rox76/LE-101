#include "function.h"

int	ft_sqrt(int nb)
{
	int i;
	int x;

	x = 0;

	if (nb <= 0)
	{
		return (0);
	}
	
	else
	{
		while (1)
		{
			if ((x * x) == nb)
			{
				return (x);
			}

			if ((x * x) > nb)
			{
				return (0);
			}
			else
			{
				x ++;
			}
		}

	}
}

int	main(void)
{
	ft_putnbr(ft_sqrt(37));
	ft_putchar('\n');
	return (0);
}
