#include "function.h"

int	ft_recursive_power(int nb, int power)
{
	int i;
	i = nb;
	if (nb <= 0 || power <= 0)
	{
		return (0);
	}

	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
}

int	main(void)
{
	int *a;
	int i;
	i = ft_recursive_power(5, 5);
	a = &i;
	ft_putnbr(*a);
	ft_putchar('\n');
	return (0);
}
