#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: listint_t **, doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *nod1, *next;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
	{ return; }

	for (node = (*list)->next; node != NULL; node = next)
	{
		next = node->next;

		for (nod1 = node->prev; nod1 != NULL && nod1->n > node->n; nod1 = node->prev)
		{
			nod1->next = node->next;
			if (node->next != NULL)
			{ node->next->prev = nod1; }
			node->next = nod1;
			node->prev = nod1->prev;
			nod1->prev = node;
			if (node->prev != NULL)
			{ node->prev->next = node; }
			else
			{ (*list) = node; }

			print_list(*list);
		}
	}
}
