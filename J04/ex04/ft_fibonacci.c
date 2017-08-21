#include "function.h"

int	ft_fibonacci(int index)
{
	if (index < 1)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int	main(void)
{
	ft_putnbr(ft_fibonacci(12));
	ft_putchar('\n');
	return (0);
}
