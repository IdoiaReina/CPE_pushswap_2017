/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** pushswha
*/

#include "pushswap.h"

Bool empty_list(List li)
{
	if (li == NULL)
		return (true);
	return (false);
}

int list_lenght(List li)
{
	int size = 0;

	if (empty_list(li))
		return (size);
	while (li != NULL) {
		size += 1;
		li = li->next;
	}
	return (size);
}

List add_elem(List li, char **la, int num)
{
	ListElement *element;

	element = malloc(sizeof(*element));
	element->value = my_getnbr(la[num]);
	if (empty_list(li))
		element->next = NULL;
	else
		element->next = li;
	return (element);
}

void display_list(List li)
{
	ListElement *element = li;

	while (element != NULL) {
		my_put_nbr(element->value);
		my_putchar('\n');
		element = element->next;
	}
}
