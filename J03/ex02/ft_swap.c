#include "function.h"

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

int	main()
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 42;
	b = 24;
	ptr1 = &a;
	ptr2 = &b;
	write (1, "Avant la fonction swap", 22);
	ft_putchar('\n');
	ft_putchar('\n');
	write(1,"ptr1 == ", 8);
	ft_putaddr(ptr1);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(*ptr1);
	ft_putchar('\n');
	write(1,"ptr2 == ", 8);
	ft_putaddr(ptr2);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(*ptr2);
	ft_swap(ptr1, ptr2);
	ft_putchar('\n');
	ft_putchar('\n');

	write (1, "Apres la fonction swap", 22);
	
	ft_putchar('\n');
	ft_putchar('\n');
	write(1,"ptr1 == ", 8);
	ft_putaddr(ptr1);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(*ptr1);
	ft_putchar('\n');
	write(1,"ptr2 == ", 8);
	ft_putaddr(ptr2);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(*ptr2);
	ft_putchar('\n');
	return (0);
}
