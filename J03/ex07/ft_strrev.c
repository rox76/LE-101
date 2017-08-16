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


	return (str);
}

int	main(void)
{
	char	ptr[] = "Hello wold";
	char	*ptr2;
	int i;
	i = 0;

	ptr2 = ft_strrev(ptr);
//	ft_putstr(ptr2);
	while (*(ptr + i))
	{
		ft_putchar(*(ptr + i));
		i ++;
	}
	ft_putchar('\n');
	return(0);
}