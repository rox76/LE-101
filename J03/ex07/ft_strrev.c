#include "function.h"

char	*ft_strrev(char *str)
{
	int	counter;
	int	size_str;
	char	temp;

	counter = 0;
	size_str = 0;
	while (str[size_str])
	{
		size_str ++;
	}
	while (counter < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[counter];
		str[counter] = temp;
		counter ++;
		size_str --;
	}
	return (str);
}

int	main()
{
	char	test2[] = "Hello";
	char	*test;
	test = 	"Bonjour tout le monde";
	char	*str;
	*str = *test2;

	ft_putstr(ft_strrev(test2));
	ft_putchar('\n');
	return (0);
}
