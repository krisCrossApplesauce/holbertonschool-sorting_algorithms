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
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *nod1 = (listint_t *) malloc(sizeof(listint_t));
	listint_t *nod2 = (listint_t *) malloc(sizeof(listint_t));

	for (node = (*list); node != NULL; node = node->next)
	{
		nod1 = node->next;

		if (nod1 != NULL)
		{
			if (node->n > nod1->n)
			{
				node->next = nod1->next;
				nod1->prev = node->prev;
				if (node->next != NULL)
				{ node->next->prev = node; }
				if (nod1->prev != NULL)
				{ nod1->prev->next = nod1; }
				nod1->next = node;
				node->prev = nod1;

				print_list(*list);

				for (; nod1 != NULL; nod1 = nod1->prev)
				{
					nod2 = nod1->prev;

					if (nod2 != NULL)
					{
						if (nod1->n < nod2->n)
						{
							nod2->next = nod1->next;
							nod1->prev = nod2->prev;
							if (nod2->next != NULL)
							{ nod2->next->prev = nod2; }
							if (nod1->prev != NULL)
							{ nod1->prev->next = nod1; }
							nod1->next = nod2;
							nod2->prev = nod1;

							print_list(*list);
						}
					}
				}
			}
		}
	}
}
