#include "function.h"

int	ft_iteractive_power(int nb, int power)
{
	int i;

	i = nb;

	while (power > 1)
	{
		nb *= i;
		power --;
	}
	return (nb);
}

int	main(void)
{
	int i;
	i = ft_iteractive_power(5, 5);
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}
