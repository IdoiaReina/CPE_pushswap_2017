/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** pushswha
*/

#include "pushswap.h"

int check_good(List li, List lb)
{
	if (li != NULL && lb != NULL)
		if (li->value < lb->value)
			return (1);
	while (li != NULL) {
		if (li->next != NULL)
			if (li->value > li->next->value)
				return (1);
		li = li->next;
	}
	while (lb != NULL) {
		if (lb->next != NULL)
			if (lb->value < lb->next->value)
				return (1);
		lb = lb->next;
	}
	return (0);
}

int check_lb(List lb)
{
	while (lb != NULL) {
		if (lb->next != NULL)
			if (lb->value < lb->next->value)
				return (1);
		lb = lb->next;
	}
	return (0);
}
