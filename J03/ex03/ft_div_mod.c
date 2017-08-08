#include "function.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 97;
	b = 9;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;

	write(1, "Avant ft_div_mod", 16);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
	ft_div_mod(a, b, div, mod);
	write(1, "Apres ft_div_mod", 16);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	ft_putnbr(d);
	ft_putchar('\n');
	return (0);
}
