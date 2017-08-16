#include "function.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;

	while (*(str + i))
	{
		i ++;
	}
	return (i);
}

int	main(void)
{
	int	i;
	char	*ptr;

	ptr = "Hello world";
	i = ft_strlen(ptr);
	ft_putnbr(i);
	ft_putchar('\n');
	return(0);
}
