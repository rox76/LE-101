#include "function.h"

void	ft_print_combn(int n)
{
	int 	cmptr_n;
	int	cmptr_chiffres;
	int	nfois[n];
	int	chiffres[99];
	int	*tablo2x[2];

	tablo2x[0] = nfois;
	tablo2x[1] = chiffres;
	cmptr_n = 0;
	cmptr_chiffres = 0;

	while (cmptr_n < n)
	{
		ft_putchar();	
	}

}

int	main(void)
{
	ft_print_combn(2);
	ft_putchar('\n');
	return (0);
}
