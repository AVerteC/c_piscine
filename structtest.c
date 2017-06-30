
#include "libft.h"

void ft_putnbr(int nb)
{
    if (nb < 0){
        ft_putchar('-');
        nb = -nb;
    }

    if (nb == 0)
        ft_putchar('0');

    if (nb / 10)
        ft_putnbr(nb / 10);

    ft_putchar(nb%10 + '0');
}


int main(int argc, char const *argv) {
    /* code */
    return 0;
}
