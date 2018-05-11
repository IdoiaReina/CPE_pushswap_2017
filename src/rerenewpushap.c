/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** pushswha
*/

#include "pushswap.h"

int main(int ac, char **la)
{
	List li = NULL;
	List lb = NULL;
	ListElement *lblast;
	int check = 1;
	int checklb = 1;

	while (ac - 1 != 0) {
		li = add_elem(li, la, ac - 1);
		ac -= 1;
	}
	check = check_good(li, lb);
	if (check == 0)
		my_putstr("\n");
	else {
		while (check != 0) {
			if (li->next == NULL) {
				checklb = check_lb(lb);
				while (checklb != 0) {
					li = push(lb, li);
					lb = pop(lb);
					my_putstr("pa ");
					checklb = check_lb(lb);
				}
			}
			else {
				if (li->value > li->next->value) {
					swap_elem(li);
					my_putstr("sa ");
				}
				if (li->value <= li->next->value) {
					lb = push(li, lb);
					li = pop(li);
					my_putstr("pb ");
					if (lb->next != NULL) {
						lblast = lb;
						while (lblast->next != NULL)
							lblast = lblast->next;
						if (lb->value <= lblast->value) {
							lb = rotate(lb);
							my_putstr("rb ");
						}
						else if (lb->value < lb->next->value) {
							swap_elem(lb);
							my_putstr("sb ");
						}
					}
				}
			}
			check = check_good(li, lb);
		}
		while (lb->next != NULL) {
			li = push(lb, li);
			lb = pop(lb);
			my_putstr("pa ");
		}
		li = push(lb, li);
		lb = pop(lb);
		my_putstr("pa\n");
	}
	return (0);
}
