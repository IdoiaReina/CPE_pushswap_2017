/*
** EPITECH PROJECT, 2017
** pushswap
** File description:
** pushswap
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_LIST_
#define STRUCT_LIST_

typedef enum
{
        false,
	true
}Bool;

typedef struct s_ListElement
{
        int value;
	struct s_ListElement *next;
}ListElement, *List;

Bool empty_list(List li);
int list_lenght(List li);
List add_elem(List li, char **la, int num);
List swap_elem(List li);
List rotate(List li);
List rrotate(List li);
List push(List lone, List ltwo);
List pop(List li);
int check_good(List li, List lb);
int check_lb(List lb);
void display_list(List li);

void my_putchar(char c);
void my_put_nbr(int nb);
int my_getnbr(char const *str);
void my_putstr(char const *str);

#endif
