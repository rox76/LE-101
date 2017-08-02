#include "function.h"

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	if (n >= 0)
	{
		ft_putchar('P');
	}
}

int	main()
{
	ft_is_negative(0);
	ft_putchar('\n');
	return(0);
}
