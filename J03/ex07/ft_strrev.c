#include "function.h"

char	*ft_strrev(char *str)
{
	int cmptr;
	int i;

	cmptr = i = 0;

	while (*(str + cmptr))
	{
		cmptr ++;
	}
	
	char	temp[cmptr];

	while (cmptr >= 0)
	{
		temp[i] = *(str + cmptr);
		cmptr --;
		i ++;
	}
	while (cmptr <= i)
	{
		*(str + cmptr) = temp[cmptr];
	}


	ft_putnbr(*str);
	return (str);
}

int	main(void)
{
	char	*ptr;
	char	*ptr2;

	ptr = "Hello wold";
	ptr2 = ft_strrev(ptr);
	ft_putstr(ptr2);
	ft_putchar('\n');
	return(0);
}
