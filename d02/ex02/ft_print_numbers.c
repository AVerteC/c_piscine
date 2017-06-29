#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_numbers(void)
{	
	int n = 48;
	while(n <= 57)
	{
		ft_putchar(n);
		n++;
	}
	ft_putchar('\n');
}


int main(void)
{ 
	ft_print_numbers();
}
