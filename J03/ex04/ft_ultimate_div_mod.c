#include "function.h"

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	
	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int	main()
{
	int *a;
	int *b;
	int c;
	int d;

	a = &c;
	b = &d;

	*a = 97;
	*b = 9;
	
	write(1, "Avant ft_ultimate_div_mod", 25);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
	ft_ultimate_div_mod(a, b);
	
	write(1, "Avant ft_ultimate_div_mod", 25);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
	return(0);
}
