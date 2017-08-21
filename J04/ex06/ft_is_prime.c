#include "function.h"
/*
Un nombre premier est un nombre qui est divisible que par le chiffre 1 ou par lui meme, sauf 0 et 1 qui ne sont pas des chiffre premiers ! !! !!! !!!! !!!!!
*/
int	ft_is_prime(int nb)
{
	int	x;
	int	y;

	x = 1;
	y = 1;

	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		while (x <= 9)
		{
			if((nb % x == 0) && x != nb)
			{
				while (y <= 9)
				{
					if ((nb % y == 0) && y != nb)
					{
						return (1);
					}
				}
				return (0);
			}
			x ++;
		}
		return (0);
	}
}

int	main(void)
{
	ft_putnbr(ft_is_prime(4));//NOMBRE PREMIER == 2,3,5,7,11,13,17,19,23,29,31,37,41,83...
	ft_putchar('\n');
	return (0);
}

