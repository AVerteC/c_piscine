//#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	c = (*a / *b);

	int d;
	d = (*a % *b);


	*a = c;
	*b = d;

}
/*int main(){

	int a = 12;
	int b = 6;
	printf("before ft_ultimate_div_mod %i %i\n", a, b);
	ft_ultimate_div_mod(&a,&b);
	printf("After ft_ultimate_div_mod %i %i\n", a, b);


}
*\