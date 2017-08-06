#include <unistd.h>
#include "function.h"

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int test;

	ft_ft(&test);
	ft_putnbr(test);
	ft_putchar('\n');
	return (0);
}
