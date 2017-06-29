#include "libft.h"


//#include <stdio.h>
 int ft_recursive_power(int nb,int power)
{if (power == 1)
	return (nb);
	return (nb * ft_recursive_power(nb,power -1 ));	 
}/*int main()
{
		int nb;
		int power;
		int res;
		res = ft_recursive_power(2,1);
		printf("%d\n",res);
}*/