#ifndef LIBFT_H
# define LIBFT_H 
# include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_alphabet(void)
{	
	char c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}




int ft_strlen(char *str)
{
	char *q=str;

	while(*q!='\0')
	q++;

	return(q-str);
}




void ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = (a / b);
	*mod = (a % b);
}




//#include <stdio.h>
void ft_swap(int *a, int *b)
{
//a=&b;
//b=&a;
	int temporary = *b;
	*b = *a;
	*a =  temporary;
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



#endif