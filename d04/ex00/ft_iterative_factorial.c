#include "libft.h"

/*#include <stdio.h>*/
int ft_iterative_factorial(int nb)
{
	int res;

	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
int main(void)
{
		int nb;
		int res;
		res = ft_iterative_factorial(2);
		printf("%d\n",res);
}
*/