#include "function.h"

void	ft_putstr(char *str)
{
	int i;
	i =0 ;

	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i ++;
	}
}

int	main(void)
{
	int i;
	char *ptr2;
	ptr2 = "Hello World";
	i=0;
	
	ft_putstr(ptr2);
	ft_putchar('\n');
	return (0);
}
