#include "libft.h"

/*#include <stdio.h>*/

int ft_recursive_factorial(int nb)
{	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
		int nb;
		int res;
		res = ft_recursive_factorial(2);
		printf("%d\n",res);
}
*/