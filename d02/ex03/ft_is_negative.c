#include <unistd.h>

int ft_putchar(int n)
{
	write(1, &n, 1);
	return 0;
}

void ft_is_negative(int n)
{	
if(n <= 0)
{
	if(n == 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
else
	ft_putchar('P');
}


int main(void)
{ 
	ft_is_negative('s');
	return 0;
}
