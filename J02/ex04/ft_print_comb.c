#include "function.h"

void	ft_print_combo(void)
{
	int	 nbre1, nbre2, nbre3;
	nbre1 = 48;
	nbre2 = 48;
	nbre3 = 48;

	while(nbre1 < 57)
	{
		if (nbre1 < nbre2 && nbre2 < nbre3)
		{
			ft_putchar(nbre1);
			ft_putchar(nbre2);
			ft_putchar(nbre3);

			if (nbre1 < 55)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
		}
		nbre3 ++;
		if (nbre3 > 57)
		{
			nbre2 ++;
			nbre3 = 48;

			if(nbre2 > 57)
			{
				nbre1 ++;
				nbre2 = 48;
			}
		}
	}
}

int	main()
{
	ft_print_combo();
	ft_putchar('\n');
	return (0);
}
