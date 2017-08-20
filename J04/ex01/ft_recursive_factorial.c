#include "function.h"

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

int	main(void)
{
	ft_putnbr(ft_recursive_factorial(5));
	ft_putchar('\n');
	return (0);
}
