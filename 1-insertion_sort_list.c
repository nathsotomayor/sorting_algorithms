#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Prints a list of integers function that
 * sorts a doubly linked list of integers in ascending order.
 *
 * @list: The list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	head = (*list)->next;
	while (head != NULL)
	{
		while (head->prev != NULL && head->n < head->prev->n)
		{
			head->prev->next = head->next;
			if (head->next != NULL)
			{
				head->next->prev = head->prev;
			}
			head->next = head->prev;
			head->prev = head->prev->prev;
			head->next->prev = head;
			if (!head->prev)
			{
				*list = head;
			}
			else
			{
				head->prev->next = head;
			}
			print_list(*list);
		}
		head = head->next;
	}
}
