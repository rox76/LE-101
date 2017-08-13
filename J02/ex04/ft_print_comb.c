#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	//a = b = c = 48;
	a = 48;
	b = 48;
	c = 48;
	d = 44;
	e = 32;

	while (a < 57)
	{
		if (c > b && b > a)
		{
			if(a < 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(a < 55)
				{
					write(1, &d, 1);
					write(1, &e, 1);
				}
			}
		}

		c ++;

		if (c > 57)
		{
			b ++;
			c = 48;
			if (b > 57)
			{
				a ++;
				b = 48;
			}
		}
	}


}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return(0);
}
