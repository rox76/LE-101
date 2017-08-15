#include "function.h"

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int i;
	int *ptr;

	ft_ft(&i);
	ft_putnbr(i);
	ft_putchar('\n');
	return(0);
}
