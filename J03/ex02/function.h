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

void	ft_putaddr_fd(void *str, int fd)
{
	long int		div;
	char			temp;
	unsigned long int	n;

	n = (unsigned long int)str;
	div = 16;
	write(fd, "0x", 2);
	while(n/ div >= 16)
	{
		div *=16;
	}
	while (div > 0)
	{
		temp = '0' + n / div;
		if (temp > '9')
		{
			temp += 39;
			write(fd, &temp, 1);
		}
		else
		{
			write(fd, &temp, 1);
		}
		n %= div;
		div /= 16;
	}
}

void	ft_putaddr(void *str)
{
	ft_putaddr_fd(str, 1);
}
