#include "function.h"
//Remplacer les return(0) par des ft_find_next_prime(nb +1)
int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;

	if (nb <= 2)
	{
		return (2);
	}
	else
	{
		while (i <= 9)
		{
			if (i != nb && nb % i == 0)
			{
					return(ft_find_next_prime(nb +1));//on met un return pour finir cette fonction et en commencer une autre
			}
			i ++;
		}
		return (nb);
	}
}

int	main(void)
{
	int i;

	i = 0;

	while (i < 100)
	{
		ft_putnbr(i);
		write(1, " = ", 3);
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
		i ++;
	}
	return (0);
}
