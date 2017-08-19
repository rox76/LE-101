#include "function.h"
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int len;
	int nb;
	int mult;

	i = 0;
	len = 0;
	nb = 0;
	mult = 1;

	while (*(str + len))
	{
		len ++;
	}
	i = len - 1;

	while (*(str + i))
	{
		if (*(str + i) >= '0' && *(str + i) <= '9')
		{
			nb += (*(str + i) - 48) * mult;
		}
		mult *= 10;
		len --;
		i --;
	}

	if (nb >= 0)
	{
		return (nb);
	}
	else
	{
		return (-nb);
	}
}
int	main(void)
{
	int a;
	char chaine[] = "i455";
	a = atoi (chaine);
//	a = ft_atoi(chaine);
	ft_putnbr(a);
	ft_putchar('\n');
	return (0);
}
