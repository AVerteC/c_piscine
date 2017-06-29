#include "libft.h"
//#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int res;
	int loup;
	loup = power;
	int result;
	res = 1;
	if(loup == 1)
		return nb;

	while(loup>0)
	{
	loup = loup-1;
	res = res * nb;	
	}
	return res;
	}


/*int main()
{
	int res;
	int nb;
	int power;
	res = ft_iterative_power (2,20);
	printf("%d\n",res);
}
*/