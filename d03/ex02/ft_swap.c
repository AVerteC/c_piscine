//#include <stdio.h>
void ft_swap(int *a, int *b)
{
//a=&b;
//b=&a;
int temporary = *b;
*b = *a;
*a =  temporary;
}

/*
int main(){
	int a = 1;
	int b = 2;
	printf("Before calling ft_swap a is %i and b is %i\n", a, b);
	ft_swap(&a,&b);
	printf("After calling ft_swap a is %i and b is %i\n", a, b);

	
}
*\