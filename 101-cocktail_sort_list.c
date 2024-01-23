#include "sort.h"

/**
 *swap_nodes - Swaps two adjacent nodes in a doubly linked list
 *@a: The first node to swap
 *@b: The second node to swap
 */
void swap_nodes(listint_t **head, listint_t *a, listint_t *b)
{
	listint_t *prevA = a->prev;
	listint_t *nextB = b->next;

	if (prevA)
		prevA->next = b;
	if (nextB)
		nextB->prev = a;

	a->next = nextB;
	a->prev = b;
	b->next = a;
	b->prev = prevA;

	if (prevA == NULL)
		*
		head = b;
}

/**
 *cocktail_sort_list - Sorts a doubly linked list
 *using the Cocktail shaker sort algorithm
 *@list: A double pointer to the head
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *current, *tail = NULL, *new_tail;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	do {
		swapped = 0;
		current = *list;

		while (current->next != tail)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(list, current, current->next);
				print_list(*list);
				swapped = 1;
			}
			else
			{
				current = current->next;
			}
		}

		new_tail = (tail == NULL) ? current : tail->prev;

		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(list, current->prev, current);
				print_list(*list);
				swapped = 1;
			}
			else
			{
				current = current->prev;
			}
		}

		*list = current;

		tail = new_tail;
	} while (swapped);
}
