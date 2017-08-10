#include "function.h"

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while ( str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	main()
{
	char *str;
	char *str2;
	int cmptr;

	str = "toto";
	str2 = str;
	cmptr = ft_strlen(str);
	ft_putnbr(cmptr);
	ft_putchar('\n');
	return (0);
}
