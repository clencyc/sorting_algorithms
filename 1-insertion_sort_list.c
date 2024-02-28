#include "sort.h"

/**
 * insertion_sort_list - sorting a list using 
 * insertion sort algo
 *
 * @list: The doubly list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp;
	if (list == NULL || *list == NULL)
	{
		return;
	}
	curr = *list;
	while (curr != NULL)
	{
		temp = curr;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->next != NULL){
				*list = temp;
			} else {
				temp->prev->next = temp;
			}
			print_list(*list);
		}
		curr = curr->next;
	}
}
