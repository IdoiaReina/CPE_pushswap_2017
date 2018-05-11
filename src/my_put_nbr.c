/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Day03/Task07
*/

#include <unistd.h>
#include "pushswap.h"

void	my_put_nbr(int nb)
{
	int	modulo;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
		if (nb < -2147483647)
			write(1, "2147483648", 10);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			modulo = (nb % 10);
			nb = (nb - modulo) / 10;
			my_put_nbr(nb);
			my_putchar(48 + modulo);
		}
		else
			my_putchar(48 + nb % 10);
	}
}
