/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** pushswha
*/

#include "pushswap.h"

List swap_elem(List li)
{
	ListElement *temp = malloc(sizeof(*temp));

	temp->value = li->value;
	li->value = li->next->value;
	li->next->value = temp->value;
	return (li);
}

List rotate(List li)
{
	ListElement *element;
	ListElement *second;

	element = li->next;
	second = li;
	while (second->next != NULL)
		second = second->next;
	second->next = li;
	second->next->next = NULL;
	return (element);
}

List rrotate(List li)
{
	ListElement *element;
	ListElement *first;

	first = li;
	while (first->next->next != NULL)
		first = first->next;
	first->next->next = li;
	element = first->next;
	first->next = NULL;
	return (element);
}

List push(List lone, List ltwo)
{
	ListElement *element;

	element = malloc(sizeof(*element));
	element->value = lone->value;
	if (empty_list(ltwo))
		element->next = NULL;
	else
		element->next = ltwo;
	return (element);
}

List pop(List li)
{
	ListElement *temp;

	temp = li ->next;
	free(li);
	li = temp;
	return (li);
}
