#include "function.h"

void 	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar(45);
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);

	}
	if (nb < 9)
	{
		nb += 48;
		ft_putchar(nb);
	}

}
int	main (void)
{
	ft_putnbr(1050604);
	ft_putchar('\n');
	return (0);
}
