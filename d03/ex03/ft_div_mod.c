//#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = (a / b);
	*mod = (a % b);




}

/*int main(){

	int a = 12;
	int b = 6;
	int div = 0;
	int mod = 0;

	printf("before ft_div_mod %i %i\n", a, b);
	ft_div_mod(a,b, &div, &mod);
	printf("after ft_div_mod %i %i\n", div, mod);






}
*\