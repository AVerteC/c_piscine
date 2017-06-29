#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_putstr(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
			ft_putchar(str[s]);
			s++;
	}
}
