#include "function.h"
/*
Un nombre premier est un nombre qui est divisible que par le chiffre 1 ou par lui meme, sauf 0 et 1 qui ne sont pas des chiffre premiers ! !! !!! !!!! !!!!!
*/
int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

int	main(void)
{
	ft_putnbr(ft_is_prime(18));//NOMBRE PREMIER == 2,3,5,7,11,13,17,19,23,29,31,37,41,83...
	ft_putchar('\n');
	return (0);
}

