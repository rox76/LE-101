#include "function.h"

char	*ft_strrev(char *str)
{
	int	cmptr;
	int	i;
	int	ii;
	char	*temp;

	cmptr = 0;

	temp = str;
	while (temp[i] != '\0')
	{
		i ++;
	}
	
	i --;
	ii = i;

	//while (cmptr <= ii)
	while (str[cmptr])
	{
		str[cmptr] = temp[i];
		i --;
		cmptr ++;
	}

	ft_putstr(temp);

	return (str);
}

int	main(void)
{
	char	ptr[] = "Hello world";
	int i;
	i = 0;

	ft_strrev(ptr);
	ft_putchar('\n');
	while (ptr[i] != '\0')
	{
		ft_putchar(*(ptr + i));
		i ++;
	}
	ft_putchar('\n');
	return(0);
}
