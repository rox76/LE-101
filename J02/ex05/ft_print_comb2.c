#include "function.h"

void	ft_print_comb2(void)
{
	int nbre1, nbre2, nbre3, nbre4;

	nbre1 = 48;
	nbre2 = 48;
	nbre3 = 48;
	nbre4 = 48;

	while (nbre1 <= 57)
	{
		if (nbre2 < nbre4)
		{
			ft_putchar(nbre1);
			ft_putchar(nbre2);
			ft_putchar(32);
			ft_putchar(nbre3);
			ft_putchar(nbre4);
			if ((nbre1 != 57 || nbre2 != 56))
			{	
				ft_putchar(44);
				ft_putchar(32);
			}
		}
		if (nbre1 == 57 && nbre2 == 55 && nbre3 == 57 && nbre4 == 57)
		{
			nbre2 ++;
		}
		else
		{
			nbre4 ++;
			if (nbre4 > 57)
			{
				nbre4 = 48;
				nbre3 ++;
				if (nbre3 > 57)
				{
					nbre3 = 48;
					nbre2 ++;
					if (nbre2 > 57)
					{
						nbre2 = 48;
						nbre1 ++;
					}
				}
			}
		}
	}
}

int main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return(0);
}
