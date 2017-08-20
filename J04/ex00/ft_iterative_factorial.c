#include "function.h"

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;
	
	i = nb -1;
	result = 0;

	while (i > 0)
	{
		nb *= i;
		i --;
	}
	return (nb);
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
	ft_putchar('\n');
	return (0);
}
