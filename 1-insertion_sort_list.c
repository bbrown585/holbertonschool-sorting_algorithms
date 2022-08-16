#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of intergers in order
 * @list: list to go through
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	a = *list;
	b = *list;
	while (b != NULL)
	{
		b = b->next;
		while (a->prev && (a->n < a->prev->n))
		{
			a->prev->next = a->next;
			if (a->next != NULL)
				a->next->prev = a->prev;

			a->next = a->prev;
			a->prev = a->next->prev;
			if (a->prev != NULL)
				a->prev->next = a;
			else
				*list = a;
			a->next->prev = a;
			print_list(*list);
		}
		a = b;
	}
}
