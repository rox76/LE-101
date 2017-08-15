#include "function.h"

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0');
	{
		ft_putchar(str[i]);
		i ++;
	}
}

int	main(void)
{
	char *ptr2;
	
	ptr2 = "Hello World";
	ft_putstr(ptr2);
	return (0);
}
