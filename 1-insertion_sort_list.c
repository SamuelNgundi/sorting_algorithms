#include "sort.h"

/**
 * insertion_sort_list - sort using insertion sort
 * @list: List to insert
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list)
		return;

	for (current = *list; current = current->next)
	{
		while (current->next && (current->next->n < current->n))
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;

			if (current->prev)
				current->prev->next = temp;

			if (temp->next)
				temp->next->prev = current;

			current->prev = temp;
			temp->next = current;

			if (temp->prev)
				current = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
	}
}
