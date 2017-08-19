#include "function.h"

char	*ft_strrev(char *str)
{
	int	counter;
	int	size_str;
	char	temp;

	counter = 0;
	size_str = 0;

	while (*(str + size_str))
	{
		size_str ++;
	}
	size_str --;

	while (counter < size_str)
	{
		temp = *(str +size_str);
		*(str + size_str) = *(str + counter);
		*(str + counter) = temp;
		counter ++;
		size_str --;
	}
	return (str);
}

int	main(void)
{
	char	ptr[] = "Hello world";
	int i;
	i = 0;

	ft_strrev(ptr);
	ft_putstr(ptr);
	/*c est pareil que ft_putstr :)
	while (ptr[i])
	{
		ft_putchar(*(ptr + i));
		i ++;
	}*/
	ft_putchar('\n');
	return(0);
}
