#include <unistd.h>
#include "function.h"

void	ft_print_numbers(void)
{
	int i;
	i = 48;
	while(i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}

int	main()
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
