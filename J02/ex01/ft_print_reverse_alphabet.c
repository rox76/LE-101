#include <unistd.h>

int	ft_putchar(char c)
{
	write(1 ,&c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	int i;
	
	i = 122;

	while(i >= 97)
	{
		ft_putchar(i);
		i--;
	}



}

int	main()
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return(0);
}
