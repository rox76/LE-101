#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	int a;

	i = 0;

	while (*(str + i))
	{
		a = *(str + i);
		write(1, &a, 1);
		i ++;
	}
}

int	main(void)
{
	char ptr[] = "Hello world";

	ft_putstr(ptr);
	write(1, "\n", 1);
	return (0);
}
