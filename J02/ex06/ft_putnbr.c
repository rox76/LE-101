#include "function.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	return(0);
}
