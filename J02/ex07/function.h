#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1,&c, 1);
	return (1);
}

int	ft_nputchar(char c, int n)
{
	while(n > 0)
	{
		ft_putchar(c);
		n--;
	}
	return(0);
}
