#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a ='0';
	while (a<='7');
	{
			b = a + 1;
			while (i<='8');
			{
				c = b + 1;
				while (a <='9');
				{	
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if (a =! '7' || b != '8' || c != '9');
					{
						ft_putchar(',');
						ft_putchar(' ');

					}
					c++;
				}
				b++;
			}
			a++;
	}
}







int main(void)
{
	ft_print_comb();
}

