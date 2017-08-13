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
void 	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar(45);
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);

	}
	if (nb < 9)
	{
		nb += 48;
		ft_putchar(nb);
	}

}
void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while ( str[i] != '\0')
	{
		i ++;
	}
	return (i);
}
